
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_030d142c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_030d1804 + 0x30d1448);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030d1808 + 0x30d145c));
    func_0x01438628(*(undefined4 *)(_UNK_030d180c + 0x30d1468));
    func_0x01438628(*(undefined4 *)(_UNK_030d1810 + 0x30d1474));
    func_0x01438628(*(undefined4 *)(_UNK_030d1814 + 0x30d1480));
    func_0x01438628(*(undefined4 *)(_UNK_030d1818 + 0x30d148c));
    func_0x01438628(*(undefined4 *)(_UNK_030d181c + 0x30d1498));
    func_0x01438628(*(undefined4 *)(_UNK_030d1820 + 0x30d14a4));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x76de,0);
  if (iVar1 == 0) {
    iVar1 = func_0x030d4930(param_1,0);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(param_2 + 0x30);
      iVar1 = func_0x030d34b8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar5 != *(int *)(iVar1 + 0xc)) {
        iVar5 = *(int *)(param_2 + 0x30);
        iVar1 = func_0x030d34b8(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (iVar5 != *(int *)(iVar1 + 0x14)) {
          return 0;
        }
      }
      iVar1 = func_0x030d2ca4(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar6 = (int *)(param_2 + 0x2c);
      if (*(int *)(iVar1 + 0x68) < *piVar6) {
        iVar1 = func_0x030d2ca4(param_1);
        iVar5 = *piVar6;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_026efc6c(iVar1,iVar5,0);
        if (*(int *)(**(int **)(_UNK_030d1824 + 0x30d15d4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x0202346c(0);
        uVar2 = func_0x01524ffc(piVar6,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar1,0x21e,uVar2,0,0,0,0);
      }
      iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_030d1828 + 0x30d1650));
      func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_030d182c + 0x30d1664));
      iVar1 = func_0x030d4138(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x046ce3e4(iVar1,uVar2,&iStack_28,**(undefined4 **)(_UNK_030d1830 + 0x30d169c));
      iVar1 = iStack_28;
      if (iVar3 != 0) {
        if (iStack_28 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0x10) != 0) {
          iVar1 = 0;
          piVar6 = *(int **)(_UNK_030d1834 + 0x30d16d8);
          while( true ) {
            iVar3 = iStack_28;
            if (iStack_28 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = iStack_28;
            if (*(int *)(iVar3 + 0xc) <= iVar1) break;
            if (iStack_28 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar7 + 0x10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar2 = func_0x04cd26d0(iVar3,iVar1,**(undefined4 **)(_UNK_030d1838 + 0x30d1730));
            iVar3 = iStack_28;
            if (iStack_28 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x14);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x04cd26d0(iVar3,iVar1,**(undefined4 **)(_UNK_030d183c + 0x30d176c));
            if (0 < iVar3) {
              do {
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar7 = *(int *)(iVar5 + 8);
                uVar8 = *(uint *)(iVar5 + 0xc);
                iVar9 = *piVar6;
                *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                if (uVar8 < *(uint *)(iVar7 + 0xc)) {
                  *(uint *)(iVar5 + 0xc) = uVar8 + 1;
                  *(undefined4 *)(iVar7 + uVar8 * 4 + 0x10) = uVar2;
                }
                else {
                  func_0x04cd29cc(iVar5,uVar2,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
                }
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            iVar1 = iVar1 + 1;
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x76de,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x0289549c(iVar1,param_1,param_2,0);
  }
  return iVar5;
}

