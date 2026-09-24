
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b498c8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar5 = (char *)(_UNK_02b49d60 + 0x2b498e4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b49d64 + 0x2b498f8));
    func_0x01438628(*(undefined4 *)(_UNK_02b49d68 + 0x2b49904));
    func_0x01438628(*(undefined4 *)(_UNK_02b49d6c + 0x2b49910));
    func_0x01438628(*(undefined4 *)(_UNK_02b49d70 + 0x2b4991c));
    func_0x01438628(*(undefined4 *)(_UNK_02b49d74 + 0x2b49928));
    func_0x01438628(*(undefined4 *)(_UNK_02b49d78 + 0x2b49934));
    func_0x01438628(*(undefined4 *)(_UNK_02b49d7c + 0x2b49940));
    func_0x01438628(*(undefined4 *)(_UNK_02b49d80 + 0x2b4994c));
    func_0x01438628(*(undefined4 *)(_UNK_02b49d84 + 0x2b49958));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x69c,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02b3ebc0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x026a1458(iVar1,param_2,0);
    iVar1 = FUN_02b3dda0();
    uVar2 = FUN_02b4985c(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02b49db4(iVar1,uVar2);
    *(undefined4 *)(param_1 + 0x44) = uVar2;
    iVar6 = *(int *)(param_1 + 0x3c);
    iVar1 = FUN_02b3df18(param_1);
    if (iVar6 != iVar1) {
      iVar6 = *(int *)(param_1 + 0x3c);
      iVar1 = FUN_02b3df18(param_1);
      iVar6 = iVar6 + 1;
      if (iVar6 <= iVar1) {
        puVar7 = *(undefined4 **)(_UNK_02b49d88 + 0x2b49a58);
        do {
          iVar1 = FUN_02b3ebc0(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x1c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x03b75e6c(iVar1,iVar6,**(undefined4 **)(_UNK_02b49d8c + 0x2b49a8c));
          iVar1 = FUN_02b3dda0();
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02b49e9c(iVar1,iVar6);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x0152da0c(&uStack_48,iVar1,**(undefined4 **)(_UNK_02b49d90 + 0x2b49ae0));
          uStack_38 = uStack_48;
          uStack_34 = uStack_44;
          uStack_30 = uStack_40;
          iStack_2c = iStack_3c;
          while (iVar3 = func_0x04878f14(&uStack_38,**(undefined4 **)(_UNK_02b49d94 + 0x2b49afc)),
                iVar1 = iStack_2c, iVar3 != 0) {
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
            iVar3 = func_0x046c26fc(iVar3,uVar2,*puVar7);
            if (iVar3 != 0) {
              iVar3 = FUN_02b3ebc0(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x18);
              uVar2 = *(undefined4 *)(iVar1 + 8);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x03b70fac(iVar3,uVar2,**(undefined4 **)(_UNK_02b49d98 + 0x2b49b9c));
              iVar8 = *(int *)(iVar1 + 0xc);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              func_0x03b70fe4(iVar3,uVar2,iVar4 - iVar8,**(undefined4 **)(_UNK_02b49d9c + 0x2b49bcc)
                             );
              iVar3 = FUN_02b3ebc0(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x18);
              uVar2 = *(undefined4 *)(iVar1 + 8);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x03b70fac(iVar3,uVar2,**(undefined4 **)(_UNK_02b49da0 + 0x2b49c14));
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
                func_0x03b70e64(iVar3,uVar2,**(undefined4 **)(_UNK_02b49da4 + 0x2b49c60));
              }
            }
          }
          func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02b49dac + 0x2b49c7c));
          iVar1 = FUN_02b3df18(param_1);
          iVar6 = iVar6 + 1;
        } while (iVar6 <= iVar1);
      }
      uVar2 = FUN_02b3df18(param_1);
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x69c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar1,param_1,param_2,0);
  }
  return;
}

