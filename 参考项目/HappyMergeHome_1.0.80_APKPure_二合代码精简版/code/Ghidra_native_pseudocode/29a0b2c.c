
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_029b0b2c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar6 = (char *)(_UNK_029b0f0c + 0x29b0b48);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029b0f10 + 0x29b0b5c));
    func_0x01438628(*(undefined4 *)(_UNK_029b0f14 + 0x29b0b68));
    func_0x01438628(*(undefined4 *)(_UNK_029b0f18 + 0x29b0b74));
    func_0x01438628(*(undefined4 *)(_UNK_029b0f1c + 0x29b0b80));
    func_0x01438628(*(undefined4 *)(_UNK_029b0f20 + 0x29b0b8c));
    func_0x01438628(*(undefined4 *)(_UNK_029b0f24 + 0x29b0b98));
    func_0x01438628(*(undefined4 *)(_UNK_029b0f28 + 0x29b0ba4));
    func_0x01438628(*(undefined4 *)(_UNK_029b0f2c + 0x29b0bb0));
    func_0x01438628(*(undefined4 *)(_UNK_029b0f30 + 0x29b0bbc));
    *pcVar6 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar7 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x4aad,0);
  if (iVar1 == 0) {
    if ((param_2 != 0) &&
       (iVar1 = func_0x029b0f58(param_1,*(undefined4 *)(param_2 + 0x30)), iVar1 != 0)) {
      iVar2 = *(int *)(iVar1 + 0x24);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0xc);
      }
      if (iVar2 != 0 && iVar3 != 0) {
        iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_029b0f34 + 0x29b0c6c));
        func_0x024f0510(iVar7,**(undefined4 **)(_UNK_029b0f38 + 0x29b0c80));
        uVar10 = *(undefined4 *)(param_2 + 0x30);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar7 + 8);
        uVar8 = *(uint *)(iVar7 + 0xc);
        piVar5 = *(int **)(_UNK_029b0f3c + 0x29b0cb8);
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
        iVar2 = *piVar5;
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (uVar8 < *(uint *)(iVar3 + 0xc)) {
          *(uint *)(iVar7 + 0xc) = uVar8 + 1;
          *(undefined4 *)(iVar3 + uVar8 * 4 + 0x10) = uVar10;
        }
        else {
          func_0x024f0520(iVar7,uVar10,
                          *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
        }
        iVar3 = *(int *)(param_1 + 0x40);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x046ccdcc(&uStack_58,iVar3,**(undefined4 **)(_UNK_029b0f40 + 0x29b0d24));
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        while (iVar3 = func_0x048a60cc(&uStack_40,**(undefined4 **)(_UNK_029b0f44 + 0x29b0d54)),
              uVar10 = uStack_34, iVar3 != 0) {
          iVar3 = (int)uStack_30;
          if ((int)uStack_30 != 0) {
            iVar2 = iVar1;
            if (iVar1 != (int)uStack_30) {
              iVar2 = *(int *)((int)uStack_30 + 0x24);
            }
            if (iVar1 != (int)uStack_30 && iVar2 != 0) {
              uVar8 = 0;
              iVar2 = *(int *)(iVar1 + 0x24);
              while( true ) {
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar8) break;
                if (*(uint *)(iVar2 + 0xc) <= uVar8) {
                  func_0x014388e8();
                }
                iVar4 = func_0x02b53c1c(*(undefined4 *)(iVar3 + 0x24),
                                        *(undefined4 *)(iVar2 + 0x10 + uVar8 * 4),0);
                if (iVar4 != 0) {
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  iVar11 = *(int *)(iVar7 + 8);
                  uVar9 = *(uint *)(iVar7 + 0xc);
                  piVar5 = *(int **)(_UNK_029b0f48 + 0x29b0e0c);
                  *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
                  iVar4 = *piVar5;
                  if (iVar11 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar9 < *(uint *)(iVar11 + 0xc)) {
                    *(uint *)(iVar7 + 0xc) = uVar9 + 1;
                    *(undefined4 *)(iVar11 + uVar9 * 4 + 0x10) = uVar10;
                  }
                  else {
                    func_0x024f0520(iVar7,uVar10,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                }
                uVar8 = uVar8 + 1;
              }
            }
          }
        }
        func_0x048a6218(&uStack_40,**(undefined4 **)(_UNK_029b0f50 + 0x29b0e68));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x4aad,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x0289549c(iVar1,param_1,param_2,0);
  }
  return iVar7;
}

