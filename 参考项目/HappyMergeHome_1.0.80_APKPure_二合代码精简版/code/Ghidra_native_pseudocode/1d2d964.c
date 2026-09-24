
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d3d964(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  
  pcVar5 = (char *)(_UNK_01d3dae0 + 0x1d3d97c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01d3dae4 + 0x1d3d990));
    func_0x01438628(*(undefined4 *)(_UNK_01d3dae8 + 0x1d3d99c));
    func_0x01438628(*(undefined4 *)(_UNK_01d3daec + 0x1d3d9a8));
    func_0x01438628(*(undefined4 *)(_UNK_01d3daf0 + 0x1d3d9b4));
    func_0x01438628(*(undefined4 *)(_UNK_01d3daf4 + 0x1d3d9c0));
    func_0x01438628(*(undefined4 *)(_UNK_01d3daf8 + 0x1d3d9cc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xb3a8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xb3a8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_0293bb84 + 0x293ba90);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0293bb88 + 0x293baa4),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
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
    func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0293bb8c + 0x293bb74));
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01d3dafc + 0x1d3da28));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar2 = *(int **)(_UNK_01d3db00 + 0x1d3da50);
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01d3db04 + 0x1d3da70));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar4 + 0x20);
  uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01d3db08 + 0x1d3da90));
  func_0x03a062d0(uVar6,iVar1,**(undefined4 **)(_UNK_01d3db0c + 0x1d3dab0),0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  (*(code *)&SUB_04cfe1c0)(iVar4,uVar6,**(undefined4 **)(_UNK_01d3db10 + 0x1d3dad4));
  return;
}

