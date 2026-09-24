
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aeb634(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined3 uStack_1c;
  undefined1 uStack_19;
  
  pcVar5 = (char *)(_UNK_01aeb8cc + 0x1aeb650);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aeb8d0 + 0x1aeb664));
    func_0x01438628(*(undefined4 *)(_UNK_01aeb8d4 + 0x1aeb670));
    func_0x01438628(*(undefined4 *)(_UNK_01aeb8d8 + 0x1aeb67c));
    func_0x01438628(*(undefined4 *)(_UNK_01aeb8dc + 0x1aeb688));
    func_0x01438628(*(undefined4 *)(_UNK_01aeb8e0 + 0x1aeb694));
    func_0x01438628(*(undefined4 *)(_UNK_01aeb8e4 + 0x1aeb6a0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2d1f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2d1f,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = FUN_01ae9944(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_01ae9944(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x026ec654(iVar1,1,0);
    FUN_01aea318(param_1);
    if (*(int *)(**(int **)(_UNK_01aeb8e8 + 0x1aeb740) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01aeb8ec + 0x1aeb75c));
    piVar6 = *(int **)(_UNK_01aeb8f0 + 0x1aeb770);
    iVar4 = *piVar6;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x014387a4();
      iVar4 = *piVar6;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x37c);
    piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01aeb8f4 + 0x1aeb798),1);
    _uStack_1c = CONCAT13(1,uStack_1c);
    iVar4 = func_0x014387ac(**(undefined4 **)(_UNK_01aeb8f8 + 0x1aeb7b8),&uStack_19);
    if (piVar6 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar4 != 0) && (iVar2 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)
       ) {
      uVar3 = func_0x01438904();
      func_0x01438790(uVar3,0);
    }
    if (piVar6[3] == 0) {
      func_0x014388e8();
    }
    piVar6[4] = iVar4;
    func_0x014385cc(piVar6 + 4,iVar4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar1,uVar7,piVar6,0);
    if (*(int *)(**(int **)(_UNK_01aeb8fc + 0x1aeb848) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x0202346c(0);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    uVar7 = func_0x01524ffc(param_2 + 8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    func_0x020257a4(iVar1,0x34f,uVar7,0);
  }
  return;
}

