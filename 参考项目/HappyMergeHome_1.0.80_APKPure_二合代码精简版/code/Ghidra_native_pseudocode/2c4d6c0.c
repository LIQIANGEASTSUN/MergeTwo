
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c5d6c0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02c5dfe0 + 0x2c5d6dc);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c5dfe4 + 0x2c5d6f0));
    func_0x01438628(*(undefined4 *)(_UNK_02c5dfe8 + 0x2c5d6fc));
    func_0x01438628(*(undefined4 *)(_UNK_02c5dfec + 0x2c5d708));
    func_0x01438628(*(undefined4 *)(_UNK_02c5dff0 + 0x2c5d714));
    func_0x01438628(*(undefined4 *)(_UNK_02c5dff4 + 0x2c5d720));
    func_0x01438628(*(undefined4 *)(_UNK_02c5dff8 + 0x2c5d72c));
    func_0x01438628(*(undefined4 *)(_UNK_02c5dffc + 0x2c5d738));
    func_0x01438628(*(undefined4 *)(_UNK_02c5e000 + 0x2c5d744));
    func_0x01438628(*(undefined4 *)(_UNK_02c5e004 + 0x2c5d750));
    func_0x01438628(*(undefined4 *)(_UNK_02c5e008 + 0x2c5d75c));
    func_0x01438628(*(undefined4 *)(_UNK_02c5e00c + 0x2c5d768));
    func_0x01438628(*(undefined4 *)(_UNK_02c5e010 + 0x2c5d774));
    func_0x01438628(*(undefined4 *)(_UNK_02c5e014 + 0x2c5d780));
    func_0x01438628(*(undefined4 *)(_UNK_02c5e018 + 0x2c5d78c));
    func_0x01438628(*(undefined4 *)(_UNK_02c5e01c + 0x2c5d798));
    func_0x01438628(*(undefined4 *)(_UNK_02c5e020 + 0x2c5d7a4));
    func_0x01438628(*(undefined4 *)(_UNK_02c5e024 + 0x2c5d7b0));
    func_0x01438628(*(undefined4 *)(_UNK_02c5e028 + 0x2c5d7bc));
    func_0x01438628(*(undefined4 *)(_UNK_02c5e02c + 0x2c5d7c8));
    func_0x01438628(*(undefined4 *)(_UNK_02c5e030 + 0x2c5d7d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c5e034 + 0x2c5d7e0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5c6c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5c6c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = 0;
    uStack_30 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    iStack_34 = iStack_4c;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x024f56d0(iVar7,uVar9,&uStack_38,uVar5);
    return;
  }
  if (param_2 != -1) {
    if (*(int *)(**(int **)(_UNK_02c5e038 + 0x2c5d848) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c5e03c + 0x2c5d864));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0202998c(iVar1,0xd,0,0);
    iVar7 = **(int **)(**(int **)(_UNK_02c5e040 + 0x2c5d89c) + 0x5c);
    iVar1 = func_0x024eecb8(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024eff78(iVar1,0);
    iVar2 = func_0x024eecb8(param_1,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x024f0474(&uStack_30,iVar2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f17b4(&uStack_40,iVar1,(undefined4)uStack_30,uStack_30._4_4_,uStack_28,0);
    uStack_30 = CONCAT44(uStack_3c,uStack_40);
    uStack_28 = uStack_38;
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar1 = **(int **)(_UNK_02c5e044 + 0x2c5d954);
    *(undefined4 *)(iVar7 + 0x94) = uStack_28;
    *(undefined8 *)(iVar7 + 0x8c) = uStack_30;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c5e048 + 0x2c5d980));
    piVar8 = *(int **)(_UNK_02c5e04c + 0x2c5d994);
    iVar7 = *piVar8;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar8;
    }
    uVar9 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x14);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02c5e050 + 0x2c5d9b8),2);
    pcVar6 = (char *)(_UNK_02c5e054 + 0x2c5d9d4);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c5e058 + 0x2c5d9e8));
      *pcVar6 = '\x01';
    }
    puVar4 = *(undefined4 **)(**(int **)(_UNK_02c5e05c + 0x2c5d9fc) + 0x5c);
    uStack_40 = *puVar4;
    uStack_3c = puVar4[1];
    iVar7 = func_0x014387ac(**(int **)(_UNK_02c5e05c + 0x2c5d9fc),&uStack_40);
    if (piVar8 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar7 != 0) && (iVar2 = func_0x014387a8(iVar7,*(undefined4 *)(*piVar8 + 0x20)), iVar2 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if (piVar8[3] == 0) {
      func_0x014388e8();
    }
    piVar8[4] = iVar7;
    func_0x014385cc(piVar8 + 4,iVar7);
    uStack_44 = FUN_02c59e5c(param_1);
    iVar7 = func_0x014387ac(**(undefined4 **)(_UNK_02c5e060 + 0x2c5da88),&uStack_44);
    if ((iVar7 != 0) && (iVar2 = func_0x014387a8(iVar7,*(undefined4 *)(*piVar8 + 0x20)), iVar2 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar8[3] < 2) {
      func_0x014388e8();
    }
    piVar8[5] = iVar7;
    func_0x014385cc(piVar8 + 5,iVar7);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02990414(iVar1,uVar9,piVar8,0);
    iVar1 = func_0x024eecb8(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar9 = func_0x024f5ff0(iVar1,0);
    if (*(int *)(**(int **)(_UNK_02c5e064 + 0x2c5db40) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar4 = *(undefined4 **)(_UNK_02c5e068 + 0x2c5db5c);
    iVar1 = func_0x014e9518(*puVar4);
    uVar5 = FUN_02c59e5c(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02bdf4e4(iVar1,uVar9,uVar5,0);
    iVar7 = func_0x014e9518(*puVar4);
    uVar5 = FUN_02c59e5c(param_1);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    FUN_02be0904(iVar7,uVar9,param_2,uVar5,0);
    iVar7 = **(int **)(**(int **)(_UNK_02c5e06c + 0x2c5dbe0) + 0x5c);
    puVar4 = *(undefined4 **)(_UNK_02c5e070 + 0x2c5dbf8);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x02b8ebd4(iVar7,0);
    iVar7 = func_0x014e9518(*puVar4);
    uVar9 = *(undefined4 *)(*(int *)(**(int **)(_UNK_02c5e074 + 0x2c5dc20) + 0x5c) + 8);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02c5e078 + 0x2c5dc30),5);
    uStack_48 = FUN_02c59e5c(param_1);
    iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02c5e07c + 0x2c5dc54),&uStack_48);
    if (piVar8 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar3 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if (piVar8[3] == 0) {
      func_0x014388e8();
    }
    piVar8[4] = iVar2;
    func_0x014385cc(piVar8 + 4,iVar2);
    puVar4 = *(undefined4 **)(_UNK_02c5e080 + 0x2c5dcd0);
    iStack_4c = param_2;
    iVar2 = func_0x014387ac(*puVar4,&iStack_4c);
    if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar3 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar8[3] < 2) {
      func_0x014388e8();
    }
    piVar8[5] = iVar2;
    func_0x014385cc(piVar8 + 5,iVar2);
    uStack_50 = 0xffffffff;
    iVar2 = func_0x014387ac(*puVar4,&uStack_50);
    if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar3 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar8[3] < 3) {
      func_0x014388e8();
    }
    piVar8[6] = iVar2;
    func_0x014385cc(piVar8 + 6,iVar2);
    uStack_54 = 6;
    iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02c5e084 + 0x2c5dd9c),&uStack_54);
    if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar3 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar8[3] < 4) {
      func_0x014388e8();
    }
    piVar8[7] = iVar2;
    func_0x014385cc(piVar8 + 7,iVar2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_58 = *(undefined4 *)(iVar1 + 8);
    iVar1 = func_0x014387ac(*puVar4,&uStack_58);
    if ((iVar1 != 0) && (iVar2 = func_0x014387a8(iVar1,*(undefined4 *)(*piVar8 + 0x20)), iVar2 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar8[3] < 5) {
      func_0x014388e8();
    }
    piVar8[8] = iVar1;
    func_0x014385cc(piVar8 + 8,iVar1);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x02990414(iVar7,uVar9,piVar8,0);
    if (*(int *)(**(int **)(_UNK_02c5e088 + 0x2c5de94) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c5e08c + 0x2c5deb0));
    piVar8 = *(int **)(_UNK_02c5e090 + 0x2c5dec4);
    iVar7 = *piVar8;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar8;
    }
    uVar9 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x160);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0374c388(iVar1,uVar9,**(undefined4 **)(_UNK_02c5e094 + 0x2c5defc));
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x58);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar1 + 8);
      uVar10 = *(uint *)(iVar1 + 0xc);
      piVar8 = *(int **)(_UNK_02c5e098 + 0x2c5df3c);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      iVar2 = *piVar8;
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      if (uVar10 < *(uint *)(iVar7 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar10 + 1;
        *(int *)(iVar7 + uVar10 * 4 + 0x10) = param_2;
      }
      else {
        func_0x024f0520(iVar1,param_2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
      }
    }
    if (*(int *)(**(int **)(_UNK_02c5e09c + 0x2c5df8c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_02c5e0a0 + 0x2c5dfa8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_02c3e4a4(iVar1,2,0,0,0);
  }
  return;
}

