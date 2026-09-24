
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031e907c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
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
  
  pcVar5 = (char *)(_UNK_031e9294 + 0x31e9090);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031e9298 + 0x31e90a4));
    func_0x01438628(*(undefined4 *)(_UNK_031e929c + 0x31e90b0));
    func_0x01438628(*(undefined4 *)(_UNK_031e92a0 + 0x31e90bc));
    func_0x01438628(*(undefined4 *)(_UNK_031e92a4 + 0x31e90c8));
    func_0x01438628(*(undefined4 *)(_UNK_031e92a8 + 0x31e90d4));
    func_0x01438628(*(undefined4 *)(_UNK_031e92ac + 0x31e90e0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3318,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3318,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = func_0x029f3fe4(param_1,0);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = FUN_031e6814(param_1);
  if (*(byte *)(param_1 + 0x3a) == uVar2) {
    return;
  }
  if (uVar2 == 0) {
    piVar7 = *(int **)(_UNK_031e92b0 + 0x31e9220);
    uVar6 = **(undefined4 **)(*piVar7 + 0x5c);
    if (*(int *)(**(int **)(_UNK_031e92b4 + 0x31e922c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024efb9c(uVar6,0);
    if (iVar1 == 0) goto LAB_031e928c;
    piVar7 = (int *)**(undefined4 **)(*piVar7 + 0x5c);
  }
  else {
    if (*(int *)(**(int **)(_UNK_031e92b8 + 0x31e916c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031e92bc + 0x31e9188));
    piVar7 = *(int **)(_UNK_031e92c0 + 0x31e919c);
    iVar4 = *piVar7;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x014387a4();
      iVar4 = *piVar7;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0xc90);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    piVar7 = (int *)func_0x0374c388(iVar1,uVar6,**(undefined4 **)(_UNK_031e92c4 + 0x31e91d4));
    if (*(int *)(**(int **)(_UNK_031e92c8 + 0x31e91ec) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024efb9c(piVar7,0);
    if (iVar1 == 0) goto LAB_031e928c;
  }
  if (piVar7 == (int *)0x0) {
    func_0x014388e4();
  }
  (**(code **)(*piVar7 + 0x128))(piVar7,0,1,*(undefined4 *)(*piVar7 + 300));
LAB_031e928c:
  *(char *)(param_1 + 0x3a) = (char)uVar2;
  return;
}

