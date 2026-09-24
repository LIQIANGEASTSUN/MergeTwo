
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_02bad358(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint in_fpscr;
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
  
  pcVar6 = (char *)(_UNK_02bad470 + 0x2bad370);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bad474 + 0x2bad384));
    func_0x01438628(*(undefined4 *)(_UNK_02bad478 + 0x2bad390));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5cc1,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_02bad47c + 0x2bad3ec) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bad480 + 0x2bad408));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x029a6fa8(iVar2,param_2,0);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = *(int *)(iVar4 + 0xc0);
    }
    fVar1 = _UNK_02bad468;
    if ((iVar4 != 0 && iVar2 != 0) && (0 < *(int *)(iVar2 + 0xc))) {
      fVar1 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x10),(byte)(in_fpscr >> 0x16) & 3)
      ;
      fVar1 = fVar1 / _UNK_02bad46c;
    }
    return fVar1;
  }
  iVar2 = func_0x029540a4(0x5cc1,0);
  if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a2c(&uStack_38,param_2,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar3 = 3;
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
  fVar1 = (float)func_0x024f5720(&uStack_38,0,0);
  return fVar1;
}

