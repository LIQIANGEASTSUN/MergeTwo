
long Recovered_BoardController_GetFirstEmptyBoardSlot_0x02BA77D8(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 == 0) {
LAB_02ca7888:
                    /* WARNING: Subroutine does not return */
    NullReferenceThrowHelper();
  }
  uVar5 = *(int *)(lVar3 + 0x18) - 1;
  uVar4 = (ulong)uVar5;
  if (-1 < (int)uVar5) {
    do {
      uVar5 = 0;
      while ((int)uVar5 < *(int *)(lVar3 + 0x1c)) {
        lVar3 = *(long *)(param_1 + 0xa0);
        if (lVar3 == 0) goto LAB_02ca7888;
        if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_02ca788c:
                    /* WARNING: Subroutine does not return */
          BoundsThrowHelper();
        }
        lVar3 = *(long *)(lVar3 + uVar4 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_02ca7888;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_02ca788c;
        lVar3 = *(long *)(lVar3 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_02ca7888;
        uVar2 = Recovered_BoardSlot_get_IsEmpty_0x2b9e508(lVar3);
        if (((uVar2 & 1) != 0) && (*(char *)(lVar3 + 0x2c) != '\0')) {
          return lVar3;
        }
        lVar3 = *(long *)(param_1 + 0x68);
        uVar5 = uVar5 + 1;
        if (lVar3 == 0) goto LAB_02ca7888;
      }
      bVar1 = 0 < (long)uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar1);
  }
  return 0;
}

