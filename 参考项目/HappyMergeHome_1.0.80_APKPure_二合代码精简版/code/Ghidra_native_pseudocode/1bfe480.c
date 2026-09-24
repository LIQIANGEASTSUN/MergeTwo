
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_01c0e480(undefined4 param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
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
  
  pcVar4 = (char *)(_UNK_01c0e5c4 + 0x1c0e494);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c0e5c8 + 0x1c0e4a8));
    func_0x01438628(*(undefined4 *)(_UNK_01c0e5cc + 0x1c0e4b4));
    func_0x01438628(*(undefined4 *)(_UNK_01c0e5d0 + 0x1c0e4c0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xaae6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xaae6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    fVar2 = (float)func_0x024f5720(&uStack_30,0,0);
    return fVar2;
  }
  iVar1 = func_0x01c0e5e0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(undefined4 *)(iVar1 + 0x38);
  if (*(int *)(**(int **)(_UNK_01c0e5d4 + 0x1c0e530) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01c0e5d8 + 0x1c0e550));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x020b151c(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x0152983c(iVar1,0,**(undefined4 **)(_UNK_01c0e5dc + 0x1c0e590));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  fVar7 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  fVar2 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
  return fVar7 / fVar2;
}

