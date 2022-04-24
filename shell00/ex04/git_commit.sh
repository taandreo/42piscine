#!/bin/bash

git log --max-count=5 --pretty=oneline | cut -d " " -f 1
