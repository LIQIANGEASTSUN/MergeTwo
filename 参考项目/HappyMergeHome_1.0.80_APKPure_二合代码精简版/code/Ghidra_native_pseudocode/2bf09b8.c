
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_02c009b8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  
  pcVar5 = (char *)(_UNK_02c00e44 + 0x2c009d8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c00e48 + 0x2c009f0));
    func_0x01438628(*(undefined4 *)(_UNK_02c00e4c + 0x2c009fc));
    func_0x01438628(*(undefined4 *)(_UNK_02c00e50 + 0x2c00a08));
    func_0x01438628(*(undefined4 *)(_UNK_02c00e54 + 0x2c00a14));
    func_0x01438628(*(undefined4 *)(_UNK_02c00e58 + 0x2c00a20));
    func_0x01438628(*(undefined4 *)(_UNK_02c00e5c + 0x2c00a2c));
    func_0x01438628(*(undefined4 *)(_UNK_02c00e60 + 0x2c00a38));
    func_0x01438628(*(undefined4 *)(_UNK_02c00e64 + 0x2c00a44));
    func_0x01438628(*(undefined4 *)(_UNK_02c00e68 + 0x2c00a50));
    func_0x01438628(*(undefined4 *)(_UNK_02c00e6c + 0x2c00a5c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xec5,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xd0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x04722c20(iVar1,**(undefined4 **)(_UNK_02c00e70 + 0x2c00ad8));
    iVar1 = *(int *)(param_1 + 0xd4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x046ccaa4(iVar1,**(undefined4 **)(_UNK_02c00e74 + 0x2c00b04));
    iVar1 = *(int *)(param_1 + 0xd8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    uVar8 = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar4) {
      func_0x01523bec(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
    }
    iVar1 = *(int *)(param_1 + 0x44);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar8) break;
      if (*(uint *)(iVar1 + 0xc) <= uVar8) {
        func_0x014388e8();
      }
      iVar4 = *(int *)(iVar1 + 0x10 + uVar8 * 4);
      if (iVar4 == 0) {
        func_0x014388e4();
        iVar3 = func_0x02c3f4b4(0,0);
        if (iVar3 != -1) {
          func_0x014388e4();
          goto LAB_02c00bb8;
        }
      }
      else {
        iVar3 = func_0x02c3f4b4(iVar4,0);
        if (iVar3 != -1) {
LAB_02c00bb8:
          iVar3 = func_0x02c3f56c(iVar4,0);
          if (iVar3 != 0) {
            if (*(int *)(**(int **)(_UNK_02c00e78 + 0x2c00bd8) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c00e7c + 0x2c00bf4));
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar2 = func_0x02c3f4b4(iVar4,0);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x02c4b538(iVar3,uVar2,0);
            if (iVar3 == 0) {
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar4 + 0xc);
              if (*(int *)(**(int **)(_UNK_02c00e80 + 0x2c00c54) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar3 = func_0x024ef144(uVar2,0,0);
              if (iVar3 != 0) {
                iVar3 = *(int *)(iVar4 + 0xc);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar3 + 0x1c) != 0) {
                  iVar3 = *(int *)(iVar4 + 0xc);
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  iVar3 = *(int *)(iVar3 + 0x1c);
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar3 + 0x1c) == 2) {
                    if (*(int *)(**(int **)(_UNK_02c00e84 + 0x2c00cd4) + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c00e88 + 0x2c00cf4));
                    iVar6 = *(int *)(iVar4 + 0xc);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    uVar2 = func_0x02c19900(iVar6,0);
                    uVar7 = *(undefined4 *)(param_1 + 0x10);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    iVar3 = FUN_02bad204(iVar3,uVar2,uVar7,0);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    if (0 < *(int *)(iVar3 + 0x28)) goto LAB_02c00d8c;
                  }
                }
              }
              iVar3 = FUN_02becd90(param_1,*(undefined4 *)(iVar4 + 0x24));
              if (iVar3 == 0) {
                func_0x02c00f70(param_1,iVar4);
                func_0x02c011b8(param_1,iVar4);
              }
            }
          }
        }
      }
LAB_02c00d8c:
      uVar8 = uVar8 + 1;
    }
    func_0x02c01424(param_1,param_3,param_4,param_5);
    if (param_2 != 0) {
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (0 < iVar4) {
        func_0x01523bec(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
      }
      iVar1 = *(int *)(param_1 + 0xd8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (1 < *(int *)(iVar1 + 0xc)) {
        iVar1 = *(int *)(param_1 + 0x50);
        uVar2 = *(undefined4 *)(param_1 + 0xd8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f0ea8(iVar1,uVar2,**(undefined4 **)(_UNK_02c00e8c + 0x2c00e30));
      }
    }
    uVar2 = *(undefined4 *)(param_1 + 0xd8);
  }
  else {
    iVar1 = func_0x029540a4(0xec5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02897b4c(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return uVar2;
}

