
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_018c1e8c(undefined4 param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_018c2264 + 0x18c1ea8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018c2268 + 0x18c1ebc));
    func_0x01438628(*(undefined4 *)(_UNK_018c226c + 0x18c1ec8));
    func_0x01438628(*(undefined4 *)(_UNK_018c2270 + 0x18c1ed4));
    func_0x01438628(*(undefined4 *)(_UNK_018c2274 + 0x18c1ee0));
    func_0x01438628(*(undefined4 *)(_UNK_018c2278 + 0x18c1eec));
    func_0x01438628(*(undefined4 *)(_UNK_018c227c + 0x18c1ef8));
    func_0x01438628(*(undefined4 *)(_UNK_018c2280 + 0x18c1f04));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x94f5,0);
  if (iVar1 == 0) {
    iVar1 = func_0x018c5390(param_1,0);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(param_2 + 0x30);
      iVar1 = func_0x018c3f18(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar5 != *(int *)(iVar1 + 0xc)) {
        iVar5 = *(int *)(param_2 + 0x30);
        iVar1 = func_0x018c3f18(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (iVar5 != *(int *)(iVar1 + 0x14)) {
          return 0;
        }
      }
      iVar1 = func_0x018c3704(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar6 = (int *)(param_2 + 0x2c);
      if (*(int *)(iVar1 + 0x68) < *piVar6) {
        iVar1 = func_0x018c3704(param_1);
        iVar5 = *piVar6;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026efc6c(iVar1,iVar5,0);
        if (*(int *)(**(int **)(_UNK_018c2284 + 0x18c2034) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x0202346c(0);
        uVar2 = func_0x01524ffc(piVar6,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar1,0x21e,uVar2,0,0,0,0);
      }
      iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_018c2288 + 0x18c20b0));
      func_0x024f0510(iVar5,**(undefined4 **)(_UNK_018c228c + 0x18c20c4));
      iVar1 = func_0x018c4b98(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x024f064c(iVar1,uVar2,&iStack_28,**(undefined4 **)(_UNK_018c2290 + 0x18c20fc));
      iVar1 = iStack_28;
      if (iVar3 != 0) {
        if (iStack_28 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0x10) != 0) {
          iVar1 = 0;
          piVar6 = *(int **)(_UNK_018c2294 + 0x18c2138);
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
            uVar2 = func_0x024f0530(iVar3,iVar1,**(undefined4 **)(_UNK_018c2298 + 0x18c2190));
            iVar3 = iStack_28;
            if (iStack_28 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x14);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x024f0530(iVar3,iVar1,**(undefined4 **)(_UNK_018c229c + 0x18c21cc));
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
                  func_0x024f0520(iVar5,uVar2,
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
    iVar1 = func_0x029540a4(0x94f5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x0289549c(iVar1,param_1,param_2,0);
  }
  return iVar5;
}

