#!/bin/bash 
ifconfig | grep -w ether | cut -d " " -f2
