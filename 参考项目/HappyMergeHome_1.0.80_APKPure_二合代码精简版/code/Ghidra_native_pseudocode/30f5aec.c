
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03105aec(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_03105bc4 + 0x3105afc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03105bc8 + 0x3105b10));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xf0f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xf0f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_02896984 + 0x28968b4);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02896988 + 0x28968c8),0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar4 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar4 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar4 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar2,&uStack_30,uVar4,0,0);
    iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0289698c + 0x2896974));
    return iVar1;
  }
  piVar5 = *(int **)(_UNK_03105bcc + 0x3105b64);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
    iVar1 = *piVar5;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4();
    func_0x0310bfac();
    iVar6 = *piVar5;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar5;
    }
    piVar5 = (int *)(*(int *)(iVar6 + 0x5c) + 4);
    *piVar5 = iVar1;
    func_0x014385cc(piVar5,iVar1);
  }
  return iVar1;
}

