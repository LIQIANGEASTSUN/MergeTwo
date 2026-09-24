
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017ddcd4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
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
  undefined4 uStack_1c;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_017dddc8 + 0x17ddcec);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017dddcc + 0x17ddd00));
    func_0x01438628(*(undefined4 *)(_UNK_017dddd0 + 0x17ddd0c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8fba,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8fba,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_02869558 + 0x2869478);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0286955c + 0x286948c),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
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
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar2,0,0);
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02869560 + 0x2869548));
    return;
  }
  *(undefined1 *)(param_1 + 0x4b) = 0;
  func_0x017ddddc(auStack_18,param_1);
  puVar5 = *(undefined4 **)(_UNK_017dddd4 + 0x17ddd84);
  uVar6 = func_0x014387ac(*puVar5,auStack_18);
  uStack_1c = uStack_14;
  uVar2 = func_0x014387ac(*puVar5,&uStack_1c);
  func_0x014e95b8(**(undefined4 **)(_UNK_017dddd8 + 0x17dddbc),uVar6,uVar2,0);
  return;
}

