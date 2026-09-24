
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bfebcc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02bff030 + 0x2bfebe8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bff034 + 0x2bfebfc));
    func_0x01438628(*(undefined4 *)(_UNK_02bff038 + 0x2bfec08));
    func_0x01438628(*(undefined4 *)(_UNK_02bff03c + 0x2bfec14));
    func_0x01438628(*(undefined4 *)(_UNK_02bff040 + 0x2bfec20));
    func_0x01438628(*(undefined4 *)(_UNK_02bff044 + 0x2bfec2c));
    func_0x01438628(*(undefined4 *)(_UNK_02bff048 + 0x2bfec38));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x218c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x218c,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar8,uVar9,&uStack_38,uVar3,0,0);
    return;
  }
  *(undefined1 *)(param_1 + 0x94) = 0;
  if (*(int *)(param_1 + 0x98) != 0) {
    func_0x0333a0d0(*(int *)(param_1 + 0x98),1,0);
  }
  if (*(int *)(param_1 + 0xb0) == -1) {
    return;
  }
  iVar1 = func_0x024eecb8(param_1,0);
  if (param_2 == 0) {
    func_0x014388e4();
  }
  uVar9 = *(undefined4 *)(param_2 + 0x4c);
  uVar3 = *(undefined4 *)(param_2 + 0x50);
  uVar5 = *(uint *)(param_2 + 0x54);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_34 = 0;
  uStack_38 = uVar5;
  func_0x024efc6c(&uStack_2c,iVar1,uVar9,uVar3);
  iVar1 = *(int *)(param_1 + 0xb4);
  if (iVar1 < 1) {
    if (*(char *)(param_1 + 200) == '\0') {
      iVar1 = FUN_02becc6c(param_1,uStack_2c,uStack_28,uStack_24);
    }
    else {
      uStack_38 = *(uint *)(param_1 + 0xb0);
      iVar1 = FUN_02bed260(param_1);
    }
  }
  iVar8 = FUN_02bfaf34(param_1,*(undefined4 *)(param_2 + 200),*(undefined4 *)(param_2 + 0xcc));
  iVar6 = **(int **)(**(int **)(_UNK_02bff04c + 0x2bfed6c) + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x02c5088c(iVar6,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar9 = func_0x014e94d8(iVar6,0);
  if (*(int *)(**(int **)(_UNK_02bff050 + 0x2bfedb8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x024eec50(iVar8,uVar9,0);
  if (iVar6 != 0) {
    iVar1 = -1;
  }
  if (*(int *)(**(int **)(_UNK_02bff054 + 0x2bfedf0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_02bff058 + 0x2bfee0c));
  piVar7 = *(int **)(_UNK_02bff05c + 0x2bfee20);
  iVar2 = *piVar7;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar7;
  }
  uVar9 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
  piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bff060 + 0x2bfee44),1);
  if (piVar7 == (int *)0x0) {
    func_0x014388e4();
  }
  if ((iVar8 != 0) && (iVar2 = func_0x014387a8(iVar8,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0))
  {
    uVar3 = func_0x01438904();
    func_0x01438790(uVar3,0);
  }
  if (piVar7[3] == 0) {
    func_0x014388e8();
  }
  piVar7[4] = iVar8;
  func_0x014385cc(piVar7 + 4,iVar8);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  func_0x02990414(iVar6,uVar9,piVar7,0);
  iVar8 = *(int *)(param_1 + 0x44);
  uVar5 = *(uint *)(param_1 + 0xb0);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar8 + 0xc) <= uVar5) {
    func_0x014388e8();
  }
  iVar8 = *(int *)(iVar8 + uVar5 * 4 + 0x10);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  iVar8 = func_0x02c3f4b4(iVar8,0);
  if (iVar8 == -1) {
    uVar5 = *(uint *)(param_1 + 0x9c);
    if ((int)uVar5 < 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
      func_0x014388e8();
    }
    iVar1 = *(int *)(iVar1 + uVar5 * 4 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02c3f4b4(iVar1,0);
    if (iVar1 == -1) {
      return;
    }
    iVar8 = *(int *)(param_1 + 0x9c);
    *(int *)(param_1 + 0xb0) = iVar8;
    iVar1 = iVar8;
  }
  else {
    iVar8 = *(int *)(param_1 + 0xb0);
  }
  *(int *)(param_1 + 0xa0) = iVar8;
  func_0x02bff064(param_1,iVar1);
  if ((-1 < *(int *)(param_1 + 0xb0)) && (iVar1 = FUN_02bfb1f0(param_1), iVar1 == 0)) {
    iVar1 = FUN_02bfb30c(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_02bfb30c(param_1);
      if ((iVar1 != 0) || (uVar5 = 1, *(char *)(param_1 + 0x84) == '\0')) goto LAB_02bff004;
    }
    else {
      uVar5 = (uint)(*(char *)(param_1 + 0x84) != '\0');
    }
    uStack_38 = uVar5;
    FUN_02bee8e8(param_1,*(undefined4 *)(param_1 + 0xa0),*(undefined1 *)(param_1 + 0x94),1);
  }
LAB_02bff004:
  if (*(int *)(param_1 + 0xa0) != -1) {
    FUN_02bef26c(param_1);
  }
  FUN_02bef6b4(param_1,0);
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  return;
}

