#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/timeinvestor2/SwarmBaseCode-ROS/src/rqt_rover_gui"

# snsure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/timeinvestor2/SwarmBaseCode-ROS/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/timeinvestor2/SwarmBaseCode-ROS/install/lib/python2.7/dist-packages:/home/timeinvestor2/SwarmBaseCode-ROS/build/rqt_rover_gui/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/timeinvestor2/SwarmBaseCode-ROS/build/rqt_rover_gui" \
    "/usr/bin/python" \
    "/home/timeinvestor2/SwarmBaseCode-ROS/src/rqt_rover_gui/setup.py" \
    build --build-base "/home/timeinvestor2/SwarmBaseCode-ROS/build/rqt_rover_gui" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/timeinvestor2/SwarmBaseCode-ROS/install" --install-scripts="/home/timeinvestor2/SwarmBaseCode-ROS/install/bin"
