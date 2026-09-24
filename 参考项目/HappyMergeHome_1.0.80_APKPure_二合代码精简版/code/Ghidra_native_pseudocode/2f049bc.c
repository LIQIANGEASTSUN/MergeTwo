
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_02f149bc(undefined4 param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_02f14b00 + 0x2f149d0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f14b04 + 0x2f149e4));
    func_0x01438628(*(undefined4 *)(_UNK_02f14b08 + 0x2f149f0));
    func_0x01438628(*(undefined4 *)(_UNK_02f14b0c + 0x2f149fc));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x6bda,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x6bda,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    fVar1 = (float)func_0x024f5720(&uStack_30,0,0);
    return fVar1;
  }
  iVar2 = FUN_02f0ab60(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(undefined4 *)(iVar2 + 0x38);
  if (*(int *)(**(int **)(_UNK_02f14b10 + 0x2f14a6c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f14b14 + 0x2f14a8c));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x0205c58c(iVar2,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x04cfd760(iVar2,0,**(undefined4 **)(_UNK_02f14b18 + 0x2f14acc));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  fVar7 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  fVar1 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
  return fVar7 / fVar1;
}

