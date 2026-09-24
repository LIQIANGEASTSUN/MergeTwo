
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016b933c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  pcVar6 = (char *)(_UNK_016b9810 + 0x16b9364);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016b9814 + 0x16b937c));
    func_0x01438628(*(undefined4 *)(_UNK_016b9818 + 0x16b9388));
    func_0x01438628(*(undefined4 *)(_UNK_016b981c + 0x16b9394));
    func_0x01438628(*(undefined4 *)(_UNK_016b9820 + 0x16b93a0));
    func_0x01438628(*(undefined4 *)(_UNK_016b9824 + 0x16b93ac));
    func_0x01438628(*(undefined4 *)(_UNK_016b9828 + 0x16b93b8));
    func_0x01438628(*(undefined4 *)(_UNK_016b982c + 0x16b93c4));
    func_0x01438628(*(undefined4 *)(_UNK_016b9830 + 0x16b93d0));
    func_0x01438628(*(undefined4 *)(_UNK_016b9834 + 0x16b93dc));
    func_0x01438628(*(undefined4 *)(_UNK_016b9838 + 0x16b93e8));
    func_0x01438628(*(undefined4 *)(_UNK_016b983c + 0x16b93f4));
    func_0x01438628(*(undefined4 *)(_UNK_016b9840 + 0x16b9400));
    func_0x01438628(*(undefined4 *)(_UNK_016b9844 + 0x16b940c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3b30,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016b9848 + 0x16b9490));
    func_0x016c79d4(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
    if (*(int *)(**(int **)(_UNK_016b984c + 0x16b94c8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x016b987c();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_016b9850 + 0x16b9518),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x035e8140(iVar2,**(undefined4 **)(_UNK_016b9854 + 0x16b953c));
    if (*(int *)(**(int **)(_UNK_016b9858 + 0x16b9554) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_016b985c + 0x16b9570));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02c488f4(iVar3,0);
    if (*(int *)(**(int **)(_UNK_016b9860 + 0x16b95a4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_016b9864 + 0x16b95c0));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x029a6fa8(iVar4,param_1,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(undefined4 *)(iVar4 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar9 = func_0x024f0e8c(iVar3,uVar9,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x024ef348(iVar2,uVar9,0);
    if (param_4 == 0) {
      func_0x014388e4();
    }
    func_0x024ef228(&uStack_50,param_4,0);
    uStack_38 = uStack_48;
    uStack_40 = uStack_50;
    *(undefined4 *)(iVar1 + 0x10) = uStack_48;
    *(undefined8 *)(iVar1 + 8) = uStack_50;
    iVar2 = func_0x016b987c();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024ef308(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0e6c(iVar2,**(undefined4 **)(_UNK_016b9868 + 0x16b96a8),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e94d8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,0,0);
    iVar2 = func_0x016b987c();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_016b986c + 0x16b971c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_016b9870 + 0x16b9738));
    uVar9 = func_0x016b987c();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_016b9874 + 0x16b975c));
    func_0x0152e3ec(uVar5,iVar1,**(undefined4 **)(_UNK_016b9878 + 0x16b977c),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar2,uVar9,param_2,param_3,0,uVar7,uVar8,uVar10,param_6,param_5,0x3f000000,0,
                    uVar5,0,0x3f000000,0x3f800000,0);
    iVar1 = func_0x016b987c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3b30,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd3cc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

