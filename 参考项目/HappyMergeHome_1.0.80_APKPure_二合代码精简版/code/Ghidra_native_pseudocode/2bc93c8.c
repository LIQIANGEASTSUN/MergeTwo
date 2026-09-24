
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd93c8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 uVar6;
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
  undefined4 uStack_18;
  
  pcVar5 = (char *)(_UNK_02bd9538 + 0x2bd93e4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd953c + 0x2bd93f8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd9540 + 0x2bd9404));
    func_0x01438628(*(undefined4 *)(_UNK_02bd9544 + 0x2bd9410));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xd70,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xd70,0);
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
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x014388e4();
  }
  FUN_026f7a74(param_2,*(int *)(param_2 + 0x80) + 1,0);
  uVar2 = *(undefined4 *)(param_2 + 0x78);
  uVar4 = *(undefined4 *)(param_2 + 0x7c);
  if (*(int *)(**(int **)(_UNK_02bd9548 + 0x2bd9490) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x02aedd4c(uVar2,uVar4,0);
  if (iVar1 == 0) {
    FUN_026f7a74(param_2,0,0);
    if (*(int *)(**(int **)(_UNK_02bd954c + 0x2bd94dc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd9550 + 0x2bd94f8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x026ffbe0(iVar1,0);
    uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uStack_18 = 0;
    FUN_026f79a4(param_2,uVar4,(int)uVar6,uVar4);
  }
  return;
}

