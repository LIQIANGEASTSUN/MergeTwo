
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032a6c20(undefined4 param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_032a6fa8 + 0x32a6c3c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032a6fac + 0x32a6c50));
    func_0x01438628(*(undefined4 *)(_UNK_032a6fb0 + 0x32a6c5c));
    func_0x01438628(*(undefined4 *)(_UNK_032a6fb4 + 0x32a6c68));
    func_0x01438628(*(undefined4 *)(_UNK_032a6fb8 + 0x32a6c74));
    func_0x01438628(*(undefined4 *)(_UNK_032a6fbc + 0x32a6c80));
    func_0x01438628(*(undefined4 *)(_UNK_032a6fc0 + 0x32a6c8c));
    func_0x01438628(*(undefined4 *)(_UNK_032a6fc4 + 0x32a6c98));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8267,0);
  if (iVar1 == 0) {
    iVar1 = func_0x032a8ec4(param_1,0);
    if (iVar1 != 0) {
      iVar1 = func_0x032a7be8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x8c);
      if (param_2 == 0) {
        func_0x014388e4();
      }
      piVar6 = (int *)(param_2 + 0x2c);
      if (iVar1 < *piVar6) {
        iVar1 = func_0x032a7be8(param_1);
        iVar5 = *piVar6;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026eefcc(iVar1,iVar5,0);
        if (*(int *)(**(int **)(_UNK_032a6fc8 + 0x32a6d78) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x0202346c(0);
        uVar2 = func_0x0515c4b0(piVar6,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar1,0x21e,uVar2,0,0,0,0);
      }
      iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_032a6fcc + 0x32a6df4));
      func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_032a6fd0 + 0x32a6e08));
      iVar1 = func_0x032a8adc(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x046ce3e4(iVar1,uVar2,&iStack_28,**(undefined4 **)(_UNK_032a6fd4 + 0x32a6e40));
      iVar1 = iStack_28;
      if (iVar3 != 0) {
        if (iStack_28 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0x10) != 0) {
          iVar1 = 0;
          piVar6 = *(int **)(_UNK_032a6fd8 + 0x32a6e7c);
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
            uVar2 = func_0x04cd26d0(iVar3,iVar1,**(undefined4 **)(_UNK_032a6fdc + 0x32a6ed4));
            iVar3 = iStack_28;
            if (iStack_28 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x14);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x04cd26d0(iVar3,iVar1,**(undefined4 **)(_UNK_032a6fe0 + 0x32a6f10));
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
    iVar1 = func_0x029540a4(0x8267,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x0289549c(iVar1,param_1,param_2,0);
  }
  return iVar5;
}

