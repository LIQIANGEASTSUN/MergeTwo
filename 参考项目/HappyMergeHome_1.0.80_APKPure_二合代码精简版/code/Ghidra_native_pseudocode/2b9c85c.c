
/* WARNING: Possible PIC construction at 0x02bacb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bacbd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bf17c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bacb64) */
/* WARNING: Removing unreachable block (ram,0x02bacbd8) */
/* WARNING: Removing unreachable block (ram,0x02bf1744) */
/* WARNING: Removing unreachable block (ram,0x02bf1754) */
/* WARNING: Removing unreachable block (ram,0x02bf1758) */
/* WARNING: Removing unreachable block (ram,0x02bf1764) */
/* WARNING: Removing unreachable block (ram,0x02bf1768) */
/* WARNING: Removing unreachable block (ram,0x02bf1778) */
/* WARNING: Removing unreachable block (ram,0x02bf177c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bac85c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  
  pcVar5 = (char *)(_UNK_02bacc14 + 0x2bac87c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bacc18 + 0x2bac894));
    func_0x01438628(*(undefined4 *)(_UNK_02bacc1c + 0x2bac8a0));
    func_0x01438628(*(undefined4 *)(_UNK_02bacc20 + 0x2bac8ac));
    func_0x01438628(*(undefined4 *)(_UNK_02bacc24 + 0x2bac8b8));
    func_0x01438628(*(undefined4 *)(_UNK_02bacc28 + 0x2bac8c4));
    func_0x01438628(*(undefined4 *)(_UNK_02bacc2c + 0x2bac8d0));
    *pcVar5 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5cbc,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5cbc,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x0289adc4(iVar3,param_1,param_2,param_3,param_4,0);
    return;
  }
  iVar3 = 0;
  puVar11 = *(undefined4 **)(_UNK_02bacc30 + 0x2bac944);
  piVar12 = *(int **)(_UNK_02bacc34 + 0x2bac94c);
  while( true ) {
    if (param_2 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(param_2 + 0x50);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar6 + 0xc) <= iVar3) break;
    iVar6 = *(int *)(param_2 + 0x50);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x0152983c(iVar6,iVar3,*puVar11);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x035e8140(iVar6,**(undefined4 **)(_UNK_02bacc38 + 0x2bac9bc));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f1048(iVar6,**(undefined4 **)(_UNK_02bacc3c + 0x2bac9e4),0);
    iVar6 = *(int *)(param_2 + 0x50);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x0152983c(iVar6,iVar3,*puVar11);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x024eecb8(iVar6,0);
    if (*(char *)(_UNK_02bacc40 + 0x2baca48) == '\0') {
      func_0x01438628(piVar12);
      *(undefined1 *)(_UNK_02bacc44 + 0x2baca68) = 1;
    }
    iVar4 = *(int *)(*piVar12 + 0x5c);
    uVar8 = *(undefined4 *)(iVar4 + 0xc);
    uVar7 = *(undefined4 *)(iVar4 + 0x10);
    uVar10 = *(undefined4 *)(iVar4 + 0x14);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024ef328(iVar6,uVar8,uVar7,uVar10,0);
    iVar3 = iVar3 + 1;
  }
  func_0x02bee744(param_2,0xffffffff,1,0);
  iVar3 = *(int *)(param_2 + 0x50);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar6 = *(int *)(iVar3 + 0xc);
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (0 < iVar6) {
    func_0x01523bec(*(undefined4 *)(iVar3 + 8),0,iVar6,0);
  }
  iVar3 = *(int *)(param_2 + 0x50);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar3 + 8);
  uVar9 = *(uint *)(iVar3 + 0xc);
  piVar12 = *(int **)(_UNK_02bacc48 + 0x2bacb34);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  iVar6 = *piVar12;
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  if (uVar9 < *(uint *)(iVar4 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar9 + 1;
    piVar12 = (int *)(iVar4 + uVar9 * 4 + 0x10);
    *piVar12 = param_3;
  }
  else {
    func_0x0152874c(iVar3,param_3,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
    iVar3 = *(int *)(param_2 + 0x50);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar3 + 8);
    uVar9 = *(uint *)(iVar3 + 0xc);
    iVar6 = *piVar12;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar9) {
      func_0x0152874c(iVar3,param_4,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38))
      ;
      pcVar5 = (char *)(_UNK_02bf1800 + 0x2bf1648);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02bf1804 + 0x2bf165c),0xffffffff,0x40200000,0);
        func_0x01438628(*(undefined4 *)(_UNK_02bf1808 + 0x2bf1668));
        *pcVar5 = '\x01';
      }
      iVar3 = func_0x02953fd4(0xe9f,0);
      if (iVar3 == 0) {
        iVar6 = *(int *)(param_2 + 0x50);
        iVar3 = 0;
        if (iVar6 != 0) {
          iVar3 = *(int *)(iVar6 + 0xc);
        }
        if (iVar6 != 0 && iVar3 != 0) {
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
              piVar12 = (int *)(param_2 + 0x58);
              if (*piVar12 == 0) {
                uVar7 = func_0x02c00e90(param_2,0x40200000);
                uVar7 = func_0x024ef208(param_2,uVar7,0);
                *(undefined4 *)(param_2 + 0x58) = uVar7;
              }
              else {
                func_0x024f0fd8(param_2,*piVar12,0);
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
    *(uint *)(iVar3 + 0xc) = uVar9 + 1;
    piVar12 = (int *)(iVar4 + uVar9 * 4 + 0x10);
    *piVar12 = param_4;
  }
SUB_014084cc:
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)piVar12 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar12 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

