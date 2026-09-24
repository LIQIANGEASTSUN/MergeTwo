
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c3223c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_02c3242c + 0x2c32258);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c32430 + 0x2c3226c));
    func_0x01438628(*(undefined4 *)(_UNK_02c32434 + 0x2c32278));
    func_0x01438628(*(undefined4 *)(_UNK_02c32438 + 0x2c32284));
    func_0x01438628(*(undefined4 *)(_UNK_02c3243c + 0x2c32290));
    func_0x01438628(*(undefined4 *)(_UNK_02c32440 + 0x2c3229c));
    func_0x01438628(*(undefined4 *)(_UNK_02c32444 + 0x2c322a8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5f01,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5f01,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c32448 + 0x2c32308));
  func_0x02c47c64(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar1 + 0xc) = param_1;
  func_0x014385cc((int *)(iVar1 + 0xc),param_1);
  iVar4 = *(int *)(param_1 + 0xd8);
  iVar2 = *(int *)(param_1 + 0x170) + 1;
  *(int *)(iVar1 + 8) = iVar2;
  *(int *)(param_1 + 0x170) = iVar2;
  if (iVar4 != 0) {
    iVar4 = func_0x014e94d8(iVar4,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar4,1,0);
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    uStack_20 = 0;
    func_0x02033490(*(int *)(param_1 + 0xe0),param_2,**(undefined4 **)(_UNK_02c3244c + 0x2c32398),0)
    ;
  }
  iVar4 = *(int *)(param_1 + 0xd8);
  if (iVar4 != 0) {
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c32450 + 0x2c323c0));
    func_0x0152e3ec(uVar5,iVar1,**(undefined4 **)(_UNK_02c32454 + 0x2c323e0),0);
    if (*(int *)(**(int **)(_UNK_02c32458 + 0x2c323f4) + 0x74) == 0) {
      func_0x014387a4();
    }
    uStack_20 = 0;
    func_0x029aab7c(iVar4,**(undefined4 **)(_UNK_02c3245c + 0x2c32418),uVar5,0x3f800000);
  }
  return;
}

