
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b1bc00(int param_1,undefined4 param_2)

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
  
  pcVar6 = (char *)(_UNK_01b1c044 + 0x1b1bc1c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1c048 + 0x1b1bc30));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c04c + 0x1b1bc3c));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c050 + 0x1b1bc48));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c054 + 0x1b1bc54));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c058 + 0x1b1bc60));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c05c + 0x1b1bc6c));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c060 + 0x1b1bc78));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c064 + 0x1b1bc84));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c068 + 0x1b1bc90));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x6f8,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01b18c14(param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_01b18c14(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x026c69ec(iVar1,param_2,0);
      iVar1 = FUN_01b188f4();
      uVar2 = FUN_01b1bb7c(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = FUN_01b1b67c(iVar1,uVar2);
      *(undefined4 *)(param_1 + 0x48) = uVar2;
      iVar5 = *(int *)(param_1 + 0x40);
      iVar1 = func_0x01b1c094(param_1);
      if (iVar5 != iVar1) {
        iVar5 = *(int *)(param_1 + 0x40);
        iVar1 = func_0x01b1c094(param_1);
        iVar5 = iVar5 + 1;
        if (iVar5 <= iVar1) {
          puVar8 = *(undefined4 **)(_UNK_01b1c06c + 0x1b1bda0);
          puVar7 = *(undefined4 **)(_UNK_01b1c070 + 0x1b1bda8);
          do {
            iVar1 = FUN_01b18c14(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x1c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x024f05ac(iVar1,iVar5,**(undefined4 **)(_UNK_01b1c074 + 0x1b1bddc));
            iVar1 = FUN_01b188f4();
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = FUN_01b1b7b8(iVar1,iVar5);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x0152da0c(&uStack_48,iVar1,**(undefined4 **)(_UNK_01b1c078 + 0x1b1be30));
            uStack_38 = uStack_48;
            uStack_34 = uStack_44;
            uStack_30 = uStack_40;
            iStack_2c = iStack_3c;
            while (iVar3 = func_0x015109ec(&uStack_38,*puVar8), iVar1 = iStack_2c, iVar3 != 0) {
              iVar3 = FUN_01b18c14(param_1);
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
              iVar3 = func_0x024f0540(iVar3,uVar2,**(undefined4 **)(_UNK_01b1c07c + 0x1b1bea0));
              if (iVar3 == 0) {
                iVar3 = FUN_01b18c14(param_1);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                iVar3 = *(int *)(iVar3 + 0x18);
                uVar2 = *(undefined4 *)(iVar1 + 8);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10d0(iVar3,uVar2,0,**(undefined4 **)(_UNK_01b1c080 + 0x1b1beec));
              }
              iVar3 = FUN_01b18c14(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x18);
              uVar2 = *(undefined4 *)(iVar1 + 8);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x024f05d4(iVar3,uVar2,**(undefined4 **)(_UNK_01b1c084 + 0x1b1bf34));
              iVar1 = *(int *)(iVar1 + 0xc);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d4(iVar3,uVar2,iVar1 + iVar4,*puVar7);
            }
            func_0x0152da2c(&uStack_38,**(undefined4 **)(_UNK_01b1c08c + 0x1b1bf78));
            iVar1 = func_0x01b1c094(param_1);
            iVar5 = iVar5 + 1;
          } while (iVar5 <= iVar1);
        }
        uVar2 = func_0x01b1c094(param_1);
        *(undefined4 *)(param_1 + 0x40) = uVar2;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x6f8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar1,param_1,param_2,0);
  }
  return;
}

