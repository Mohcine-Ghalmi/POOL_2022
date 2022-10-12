#!/bin/bash
cat /etc/passwd | sed '/^#/d' 
