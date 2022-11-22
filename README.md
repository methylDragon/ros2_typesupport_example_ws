# ros2_typesupport_example_ws

## Description
This repo contains the results of running `colcon build` to invoke the ROS 2 type support pipeline on an example message package (with FastRTPS.)

Consequently, the `build` directory will be populated with generated code for typesupport and the messages. Take a look!

## Messages
`Example.msg`
```
bool example_member_aaa
int8 example_member_bbb
```

`NestedExample.msg`
```
uint16       nested_example_member_ccc
uint32       nested_example_member_ddd
Example[]    nested_example_inner_memberrr
```
