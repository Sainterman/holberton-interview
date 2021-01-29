#!/usr/bin/python3
"""
You have n number of locked boxes in front of you. Each box is numbered
sequentially from 0 to n - 1 and each box may contain keys to the other boxes.
"""


def canUnlockAll(boxes):
    """
    Method that checks if every box can be opened
    """
    opened = [0]

    if len(boxes) == 0:
        return False
    for boxIndex in opened:
        for key in boxes[boxIndex]:
            if key not in opened:
                if key < len(boxes):
                    opened.append(key)
        print(opened)
    if len(opened) == len(boxes):
        return True
    return False
