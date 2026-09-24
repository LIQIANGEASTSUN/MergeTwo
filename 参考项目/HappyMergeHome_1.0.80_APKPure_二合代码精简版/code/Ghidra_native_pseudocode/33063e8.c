
/* WARNING: Possible PIC construction at 0x0331589c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x033158a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_033163e8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *pcVar5;
  int unaff_r5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *puVar8;
  undefined4 unaff_lr;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar2 = func_0x02953fd4(0x850b,0);
  if (iVar2 == 0) {
    iVar2 = FUN_0330edb4(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(char *)(iVar2 + 0x41) != '\0') {
      return;
    }
    iVar2 = FUN_03315714(param_1);
    if (iVar2 == 0) {
      return;
    }
    pcVar5 = (char *)(_UNK_03315aec + 0x33157c0);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_03315af0 + 0x33157d4));
      func_0x01438628(*(undefined4 *)(_UNK_03315af4 + 0x33157e0));
      func_0x01438628(*(undefined4 *)(_UNK_03315af8 + 0x33157ec));
      func_0x01438628(*(undefined4 *)(_UNK_03315afc + 0x33157f8));
      func_0x01438628(*(undefined4 *)(_UNK_03315b00 + 0x3315804));
      func_0x01438628(*(undefined4 *)(_UNK_03315b04 + 0x3315810));
      func_0x01438628(*(undefined4 *)(_UNK_03315b08 + 0x331581c));
      func_0x01438628(*(undefined4 *)(_UNK_03315b0c + 0x3315828));
      func_0x01438628(*(undefined4 *)(_UNK_03315b10 + 0x3315834));
      func_0x01438628(*(undefined4 *)(_UNK_03315b14 + 0x3315840));
      func_0x01438628(*(undefined4 *)(_UNK_03315b18 + 0x331584c));
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iVar2 = func_0x02953fd4(0x850c,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_03315b1c + 0x33158b0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03315b20 + 0x33158cc));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x036c7bec(iVar2,**(undefined4 **)(_UNK_03315b24 + 0x33158ec));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x03b72148(iVar2,0x16,**(undefined4 **)(_UNK_03315b28 + 0x3315924));
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x04cfe6f4(&uStack_40,iVar3,**(undefined4 **)(_UNK_03315b2c + 0x331595c));
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        uStack_28 = uStack_38;
        iStack_24 = iStack_34;
        puVar7 = *(undefined4 **)(_UNK_03315b30 + 0x3315978);
        puVar8 = *(undefined4 **)(_UNK_03315b34 + 0x3315980);
        while (iVar1 = func_0x04878f14(&uStack_30,*puVar7), iVar3 = iStack_24, iVar1 != 0) {
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar3 + 8)) {
            iVar1 = FUN_0330edb4(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x18);
            uVar6 = *(undefined4 *)(iVar3 + 8);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x03b75ba0(iVar1,uVar6,*puVar8);
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          }
        }
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_03315b38 + 0x3315a04));
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x03b776fc(iVar2,**(undefined4 **)(_UNK_03315b40 + 0x3315a28));
        if (*(int *)(**(int **)(_UNK_03315b44 + 0x3315a3c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = FUN_0330dad0();
        if (iVar2 != 0) {
          FUN_03315b4c();
        }
      }
      return;
    }
    iVar2 = func_0x029540a4(0x850c,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x33158a0;
    unaff_r4 = param_1;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)&uStack_40;
  }
  else {
    iVar2 = func_0x029540a4(0x850b,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x024f56c0((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar3 = *(int *)(iVar2 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar3 != 0) {
    func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x30),iVar3,0);
  }
  func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar3 = *(int *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x024f56d0(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  return;
}

