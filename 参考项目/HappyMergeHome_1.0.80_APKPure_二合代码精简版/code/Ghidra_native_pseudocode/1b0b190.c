
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b1b190(int param_1,undefined4 param_2)

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
  
  pcVar5 = (char *)(_UNK_01b1b628 + 0x1b1b1ac);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1b62c + 0x1b1b1c0));
    func_0x01438628(*(undefined4 *)(_UNK_01b1b630 + 0x1b1b1cc));
    func_0x01438628(*(undefined4 *)(_UNK_01b1b634 + 0x1b1b1d8));
    func_0x01438628(*(undefined4 *)(_UNK_01b1b638 + 0x1b1b1e4));
    func_0x01438628(*(undefined4 *)(_UNK_01b1b63c + 0x1b1b1f0));
    func_0x01438628(*(undefined4 *)(_UNK_01b1b640 + 0x1b1b1fc));
    func_0x01438628(*(undefined4 *)(_UNK_01b1b644 + 0x1b1b208));
    func_0x01438628(*(undefined4 *)(_UNK_01b1b648 + 0x1b1b214));
    func_0x01438628(*(undefined4 *)(_UNK_01b1b64c + 0x1b1b220));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x6fe,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01b18c14(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x026c6930(iVar1,param_2,0);
    iVar1 = FUN_01b188f4();
    uVar2 = FUN_01b1b124(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x01b1b67c(iVar1,uVar2);
    *(undefined4 *)(param_1 + 0x44) = uVar2;
    iVar6 = *(int *)(param_1 + 0x3c);
    iVar1 = func_0x01b1b764(param_1);
    if (iVar6 != iVar1) {
      iVar6 = *(int *)(param_1 + 0x3c);
      iVar1 = func_0x01b1b764(param_1);
      iVar6 = iVar6 + 1;
      if (iVar6 <= iVar1) {
        puVar7 = *(undefined4 **)(_UNK_01b1b650 + 0x1b1b320);
        do {
          iVar1 = FUN_01b18c14(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x1c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x024f13dc(iVar1,iVar6,**(undefined4 **)(_UNK_01b1b654 + 0x1b1b354));
          iVar1 = FUN_01b188f4();
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x01b1b7b8(iVar1,iVar6);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x0152da0c(&uStack_48,iVar1,**(undefined4 **)(_UNK_01b1b658 + 0x1b1b3a8));
          uStack_38 = uStack_48;
          uStack_34 = uStack_44;
          uStack_30 = uStack_40;
          iStack_2c = iStack_3c;
          while (iVar3 = func_0x015109ec(&uStack_38,**(undefined4 **)(_UNK_01b1b65c + 0x1b1b3c4)),
                iVar1 = iStack_2c, iVar3 != 0) {
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
            iVar3 = func_0x024f0540(iVar3,uVar2,*puVar7);
            if (iVar3 != 0) {
              iVar3 = FUN_01b18c14(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x18);
              uVar2 = *(undefined4 *)(iVar1 + 8);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x024f05d4(iVar3,uVar2,**(undefined4 **)(_UNK_01b1b660 + 0x1b1b464));
              iVar8 = *(int *)(iVar1 + 0xc);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d4(iVar3,uVar2,iVar4 - iVar8,**(undefined4 **)(_UNK_01b1b664 + 0x1b1b494)
                             );
              iVar3 = FUN_01b18c14(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x18);
              uVar2 = *(undefined4 *)(iVar1 + 8);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x024f05d4(iVar3,uVar2,**(undefined4 **)(_UNK_01b1b668 + 0x1b1b4dc));
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
                func_0x024f10d8(iVar3,uVar2,**(undefined4 **)(_UNK_01b1b66c + 0x1b1b528));
              }
            }
          }
          func_0x0152da2c(&uStack_38,**(undefined4 **)(_UNK_01b1b674 + 0x1b1b544));
          iVar1 = func_0x01b1b764(param_1);
          iVar6 = iVar6 + 1;
        } while (iVar6 <= iVar1);
      }
      uVar2 = func_0x01b1b764(param_1);
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x6fe,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar1,param_1,param_2,0);
  }
  return;
}

