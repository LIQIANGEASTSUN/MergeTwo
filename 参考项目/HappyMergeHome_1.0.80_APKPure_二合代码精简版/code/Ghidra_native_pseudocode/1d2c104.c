
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01d3c104(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar5 = (char *)(_UNK_01d3c238 + 0x1d3c11c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01d3c23c + 0x1d3c130));
    func_0x01438628(*(undefined4 *)(_UNK_01d3c240 + 0x1d3c13c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xb392,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xb392,0);
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
    uVar2 = func_0x024f56f0(&uStack_38,0,0);
    return uVar2;
  }
  iVar1 = FUN_01d3a9c0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x30);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f0540(iVar1,param_2,**(undefined4 **)(_UNK_01d3c244 + 0x1d3c1c4));
  uVar2 = func_0x01d3c24c(param_1,param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_01d3a9c0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b70fac(iVar1,param_2,**(undefined4 **)(_UNK_01d3c248 + 0x1d3c220));
    uVar2 = uVar2 - iVar1 & ~((int)(uVar2 - iVar1) >> 0x1f);
  }
  return uVar2;
}

