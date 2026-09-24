
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4a260(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_02b4a6a4 + 0x2b4a27c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4a6a8 + 0x2b4a290));
    func_0x01438628(*(undefined4 *)(_UNK_02b4a6ac + 0x2b4a29c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4a6b0 + 0x2b4a2a8));
    func_0x01438628(*(undefined4 *)(_UNK_02b4a6b4 + 0x2b4a2b4));
    func_0x01438628(*(undefined4 *)(_UNK_02b4a6b8 + 0x2b4a2c0));
    func_0x01438628(*(undefined4 *)(_UNK_02b4a6bc + 0x2b4a2cc));
    func_0x01438628(*(undefined4 *)(_UNK_02b4a6c0 + 0x2b4a2d8));
    func_0x01438628(*(undefined4 *)(_UNK_02b4a6c4 + 0x2b4a2e4));
    func_0x01438628(*(undefined4 *)(_UNK_02b4a6c8 + 0x2b4a2f0));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x63b,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02b3ebc0(param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_02b3ebc0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x026a1514(iVar1,param_2,0);
      iVar1 = FUN_02b3dda0();
      uVar2 = FUN_02b3e290(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = FUN_02b49db4(iVar1,uVar2);
      *(undefined4 *)(param_1 + 0x48) = uVar2;
      iVar5 = *(int *)(param_1 + 0x40);
      iVar1 = func_0x02b4a6f4(param_1);
      if (iVar5 != iVar1) {
        iVar5 = *(int *)(param_1 + 0x40);
        iVar1 = func_0x02b4a6f4(param_1);
        iVar5 = iVar5 + 1;
        if (iVar5 <= iVar1) {
          puVar8 = *(undefined4 **)(_UNK_02b4a6cc + 0x2b4a400);
          puVar7 = *(undefined4 **)(_UNK_02b4a6d0 + 0x2b4a408);
          do {
            iVar1 = FUN_02b3ebc0(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x1c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x03b75ba0(iVar1,iVar5,**(undefined4 **)(_UNK_02b4a6d4 + 0x2b4a43c));
            iVar1 = FUN_02b3dda0();
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = FUN_02b49e9c(iVar1,iVar5);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x0152da0c(&uStack_48,iVar1,**(undefined4 **)(_UNK_02b4a6d8 + 0x2b4a490));
            uStack_38 = uStack_48;
            uStack_34 = uStack_44;
            uStack_30 = uStack_40;
            iStack_2c = iStack_3c;
            while (iVar3 = func_0x04878f14(&uStack_38,*puVar8), iVar1 = iStack_2c, iVar3 != 0) {
              iVar3 = FUN_02b3ebc0(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x18);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar1 + 8);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x046c26fc(iVar3,uVar2,**(undefined4 **)(_UNK_02b4a6dc + 0x2b4a500));
              if (iVar3 == 0) {
                iVar3 = FUN_02b3ebc0(param_1);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                iVar3 = *(int *)(iVar3 + 0x18);
                uVar2 = *(undefined4 *)(iVar1 + 8);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                func_0x03b70cd0(iVar3,uVar2,0,**(undefined4 **)(_UNK_02b4a6e0 + 0x2b4a54c));
              }
              iVar3 = FUN_02b3ebc0(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x18);
              uVar2 = *(undefined4 *)(iVar1 + 8);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x03b70fac(iVar3,uVar2,**(undefined4 **)(_UNK_02b4a6e4 + 0x2b4a594));
              iVar1 = *(int *)(iVar1 + 0xc);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              func_0x03b70fe4(iVar3,uVar2,iVar1 + iVar4,*puVar7);
            }
            func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02b4a6ec + 0x2b4a5d8));
            iVar1 = func_0x02b4a6f4(param_1);
            iVar5 = iVar5 + 1;
          } while (iVar5 <= iVar1);
        }
        uVar2 = func_0x02b4a6f4(param_1);
        *(undefined4 *)(param_1 + 0x40) = uVar2;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x63b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar1,param_1,param_2,0);
  }
  return;
}

