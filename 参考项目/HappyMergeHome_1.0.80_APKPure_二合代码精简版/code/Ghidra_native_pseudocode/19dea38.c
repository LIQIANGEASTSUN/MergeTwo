
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_019eea38(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_019eeb78 + 0x19eea50);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019eeb7c + 0x19eea64));
    func_0x01438628(*(undefined4 *)(_UNK_019eeb80 + 0x19eea70));
    func_0x01438628(*(undefined4 *)(_UNK_019eeb84 + 0x19eea7c));
    func_0x01438628(*(undefined4 *)(_UNK_019eeb88 + 0x19eea88));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x36f3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x36f3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_38,uVar3,0,0);
    uVar2 = func_0x024f56e0(&uStack_38,0,0);
    return uVar2;
  }
  if (*(int *)(**(int **)(_UNK_019eeb8c + 0x19eeae4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019eeb90 + 0x19eeb00));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  uVar2 = 0;
  if ((iVar1 != 0) &&
     (bVar7 = *(int *)(iVar1 + 0xc) != 0, uVar2 = (uint)bVar7, bVar7 && param_2 != 1)) {
    iVar1 = func_0x0152983c(iVar1,0,**(undefined4 **)(_UNK_019eeb94 + 0x19eeb4c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = (uint)(*(int *)(iVar1 + 8) == param_2);
  }
  return uVar2;
}

