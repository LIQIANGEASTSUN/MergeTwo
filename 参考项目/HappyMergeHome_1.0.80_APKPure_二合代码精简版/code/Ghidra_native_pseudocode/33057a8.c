
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_033157a8(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_03315aec + 0x33157c0);
  if (*pcVar3 == '\0') {
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
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x850c,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03315b1c + 0x33158b0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03315b20 + 0x33158cc));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_03315b24 + 0x33158ec));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b72148(iVar1,0x16,**(undefined4 **)(_UNK_03315b28 + 0x3315924));
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_40,iVar4,**(undefined4 **)(_UNK_03315b2c + 0x331595c));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar6 = *(undefined4 **)(_UNK_03315b30 + 0x3315978);
      puVar7 = *(undefined4 **)(_UNK_03315b34 + 0x3315980);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar6), iVar4 = iStack_24, iVar2 != 0) {
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar4 + 8)) {
          iVar2 = FUN_0330edb4(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x18);
          uVar5 = *(undefined4 *)(iVar4 + 8);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar2,uVar5,*puVar7);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_03315b38 + 0x3315a04));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b776fc(iVar1,**(undefined4 **)(_UNK_03315b40 + 0x3315a28));
      if (*(int *)(**(int **)(_UNK_03315b44 + 0x3315a3c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_0330dad0();
      if (iVar1 != 0) {
        func_0x03315b4c();
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x850c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

