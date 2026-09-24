
/* WARNING: Possible PIC construction at 0x02bac484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bac4f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bf17c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bac488) */
/* WARNING: Removing unreachable block (ram,0x02bac4fc) */
/* WARNING: Removing unreachable block (ram,0x02bf1744) */
/* WARNING: Removing unreachable block (ram,0x02bf1754) */
/* WARNING: Removing unreachable block (ram,0x02bf1758) */
/* WARNING: Removing unreachable block (ram,0x02bf1764) */
/* WARNING: Removing unreachable block (ram,0x02bf1768) */
/* WARNING: Removing unreachable block (ram,0x02bf1778) */
/* WARNING: Removing unreachable block (ram,0x02bf177c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bac2e4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  
  pcVar6 = (char *)(_UNK_02bac538 + 0x2bac304);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bac53c + 0x2bac31c));
    func_0x01438628(*(undefined4 *)(_UNK_02bac540 + 0x2bac328));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5cb7,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5cb7,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x0289adc4(iVar3,param_1,param_2,param_3,param_4,0);
    return;
  }
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(param_2 + 0x50);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar3 + 0xc);
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (0 < iVar5) {
    func_0x01523bec(*(undefined4 *)(iVar3 + 8),0,iVar5,0);
  }
  func_0x02bee744(param_2,0xffffffff,1,0);
  iVar3 = *(int *)(param_2 + 0x50);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar3 + 0xc);
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (0 < iVar5) {
    func_0x01523bec(*(undefined4 *)(iVar3 + 8),0,iVar5,0);
  }
  iVar3 = *(int *)(param_2 + 0x50);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar3 + 8);
  uVar7 = *(uint *)(iVar3 + 0xc);
  piVar8 = *(int **)(_UNK_02bac544 + 0x2bac458);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  iVar9 = *piVar8;
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (uVar7 < *(uint *)(iVar5 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    piVar8 = (int *)(iVar5 + uVar7 * 4 + 0x10);
    *piVar8 = param_3;
  }
  else {
    func_0x0152874c(iVar3,param_3,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
    iVar3 = *(int *)(param_2 + 0x50);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar5 = *(int *)(iVar3 + 8);
    uVar7 = *(uint *)(iVar3 + 0xc);
    iVar9 = *piVar8;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar7) {
      func_0x0152874c(iVar3,param_4,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38))
      ;
      pcVar6 = (char *)(_UNK_02bf1800 + 0x2bf1648);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02bf1804 + 0x2bf165c),0xffffffff,0x40200000,0);
        func_0x01438628(*(undefined4 *)(_UNK_02bf1808 + 0x2bf1668));
        *pcVar6 = '\x01';
      }
      iVar3 = func_0x02953fd4(0xe9f,0);
      if (iVar3 == 0) {
        iVar5 = *(int *)(param_2 + 0x50);
        iVar3 = 0;
        if (iVar5 != 0) {
          iVar3 = *(int *)(iVar5 + 0xc);
        }
        if (iVar5 != 0 && iVar3 != 0) {
          iVar3 = func_0x014e94d8(param_2,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x024ef984(iVar3,0);
          if (iVar3 != 0) {
            iVar3 = func_0x014e94d8(param_2,0);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x024efc2c(iVar3,0);
            if (iVar3 != 0) {
              piVar8 = (int *)(param_2 + 0x58);
              if (*piVar8 == 0) {
                uVar4 = func_0x02c00e90(param_2,0x40200000);
                uVar4 = func_0x024ef208(param_2,uVar4,0);
                *(undefined4 *)(param_2 + 0x58) = uVar4;
              }
              else {
                func_0x024f0fd8(param_2,*piVar8,0);
                *(undefined4 *)(param_2 + 0x58) = 0;
              }
              goto SUB_014084cc;
            }
          }
        }
      }
      else {
        iVar3 = func_0x029540a4(0xe9f,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x028960bc(iVar3,param_2,0xffffffff,0x40200000,0);
      }
      return;
    }
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    piVar8 = (int *)(iVar5 + uVar7 * 4 + 0x10);
    *piVar8 = param_4;
  }
SUB_014084cc:
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)piVar8 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar8 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

