
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c1000c(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
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
  
  pcVar4 = (char *)(_UNK_01c101a0 + 0x1c10020);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c101a4 + 0x1c10034));
    func_0x01438628(*(undefined4 *)(_UNK_01c101a8 + 0x1c10040));
    func_0x01438628(*(undefined4 *)(_UNK_01c101ac + 0x1c1004c));
    func_0x01438628(*(undefined4 *)(_UNK_01c101b0 + 0x1c10058));
    func_0x01438628(*(undefined4 *)(_UNK_01c101b4 + 0x1c10064));
    func_0x01438628(*(undefined4 *)(_UNK_01c101b8 + 0x1c10070));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x34ca,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x34ca,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_028d0154 + 0x28d0074);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028d0158 + 0x28d0088),param_1,0);
      *pcVar4 = '\x01';
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
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028d015c + 0x28d0144));
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01c101bc + 0x1c100c8));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 0xc) = param_1;
  func_0x014385cc((undefined4 *)(iVar1 + 0xc),param_1);
  uVar6 = FUN_01c0f9c8(param_1);
  piVar2 = *(int **)(_UNK_01c101c0 + 0x1c10110);
  *(undefined4 *)(iVar1 + 8) = uVar6;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01c101c4 + 0x1c10130));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar5 + 0x1c);
  uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01c101c8 + 0x1c10150));
  func_0x03a062d0(uVar6,iVar1,**(undefined4 **)(_UNK_01c101cc + 0x1c10170),0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  (*(code *)&SUB_04cfe1c0)(iVar5,uVar6,**(undefined4 **)(_UNK_01c101d0 + 0x1c10194));
  return;
}

