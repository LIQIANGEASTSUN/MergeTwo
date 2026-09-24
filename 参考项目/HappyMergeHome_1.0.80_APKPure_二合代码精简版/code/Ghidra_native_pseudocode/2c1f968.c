
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c2f968(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  
  pcVar7 = (char *)(_UNK_02c30020 + 0x2c2f988);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c30024 + 0x2c2f9a4));
    func_0x01438628(*(undefined4 *)(_UNK_02c30028 + 0x2c2f9b0));
    func_0x01438628(*(undefined4 *)(_UNK_02c3002c + 0x2c2f9bc));
    func_0x01438628(*(undefined4 *)(_UNK_02c30030 + 0x2c2f9c8));
    func_0x01438628(*(undefined4 *)(_UNK_02c30034 + 0x2c2f9d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c30038 + 0x2c2f9e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c3003c + 0x2c2f9ec));
    func_0x01438628(*(undefined4 *)(_UNK_02c30040 + 0x2c2f9f8));
    func_0x01438628(*(undefined4 *)(_UNK_02c30044 + 0x2c2fa04));
    func_0x01438628(*(undefined4 *)(_UNK_02c30048 + 0x2c2fa10));
    func_0x01438628(*(undefined4 *)(_UNK_02c3004c + 0x2c2fa1c));
    func_0x01438628(*(undefined4 *)(_UNK_02c30050 + 0x2c2fa28));
    func_0x01438628(*(undefined4 *)(_UNK_02c30054 + 0x2c2fa34));
    func_0x01438628(*(undefined4 *)(_UNK_02c30058 + 0x2c2fa40));
    func_0x01438628(*(undefined4 *)(_UNK_02c3005c + 0x2c2fa4c));
    func_0x01438628(*(undefined4 *)(_UNK_02c30060 + 0x2c2fa58));
    func_0x01438628(*(undefined4 *)(_UNK_02c30064 + 0x2c2fa64));
    func_0x01438628(*(undefined4 *)(_UNK_02c30068 + 0x2c2fa70));
    func_0x01438628(*(undefined4 *)(_UNK_02c3006c + 0x2c2fa7c));
    *pcVar7 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  iVar1 = func_0x02953fd4(0x5e83,0);
  if (iVar1 == 0) {
    if (param_3 != 0) {
      func_0x02c30ddc(param_1);
      if (*(int *)(**(int **)(_UNK_02c30070 + 0x2c2fb04) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c30074 + 0x2c2fb20));
      uVar2 = FUN_02c0c0ac(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      FUN_02bda8ac(iVar1,param_4,uVar2,**(undefined4 **)(_UNK_02c30078 + 0x2c2fb54),1,0);
      if (*(int *)(**(int **)(_UNK_02c3007c + 0x2c2fb78) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c30080 + 0x2c2fb94));
      piVar8 = *(int **)(_UNK_02c30084 + 0x2c2fba8);
      iVar3 = *piVar8;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x014387a4();
        iVar3 = *piVar8;
      }
      uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
      piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02c30088 + 0x2c2fbd0),2);
      pcVar7 = (char *)(_UNK_02c3008c + 0x2c2fbec);
      if (*pcVar7 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02c30090 + 0x2c2fc00));
        *pcVar7 = '\x01';
      }
      puVar6 = *(undefined4 **)(**(int **)(_UNK_02c30094 + 0x2c2fc14) + 0x5c);
      uStack_50 = *puVar6;
      uStack_4c = puVar6[1];
      iVar3 = func_0x014387ac(**(int **)(_UNK_02c30094 + 0x2c2fc14),&uStack_50);
      if (piVar8 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar3 != 0) &&
         (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar8 + 0x20)), iVar4 == 0)) {
        uVar5 = func_0x01438904();
        func_0x01438790(uVar5,0);
      }
      if (piVar8[3] == 0) {
        func_0x014388e8();
      }
      piVar8[4] = iVar3;
      func_0x014385cc(piVar8 + 4,iVar3);
      uStack_54 = FUN_02c0c0ac(param_1);
      puVar6 = *(undefined4 **)(_UNK_02c30098 + 0x2c2fca4);
      iVar3 = func_0x014387ac(*puVar6,&uStack_54);
      if ((iVar3 != 0) &&
         (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar8 + 0x20)), iVar4 == 0)) {
        uVar5 = func_0x01438904();
        func_0x01438790(uVar5,0);
      }
      if ((uint)piVar8[3] < 2) {
        func_0x014388e8();
      }
      piVar8[5] = iVar3;
      func_0x014385cc(piVar8 + 5,iVar3);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02990414(iVar1,uVar2,piVar8,0);
      if (*(int *)(**(int **)(_UNK_02c3009c + 0x2c2fd2c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c300a0 + 0x2c2fd50));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0299ab14(iVar1,0);
      uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uVar2 = *(undefined4 *)(param_3 + 0xbc);
      iVar1 = **(int **)(**(int **)(_UNK_02c300a4 + 0x2c2fd80) + 0x5c);
      uStack_48 = 0;
      uStack_38 = 0;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_58 = FUN_02c0c0ac(param_1);
      uStack_60 = *puVar6;
      uStack_5c = 0xffffffff;
      uStack_44 = func_0x014e95a8(&uStack_60,0);
      func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
      uStack_48 = 6;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02e64460(iVar1,param_2,uVar2);
      iVar1 = **(int **)(**(int **)(_UNK_02c300a8 + 0x2c2fe58) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02e61f28(iVar1,param_2,0);
      if (*(int *)(**(int **)(_UNK_02c300ac + 0x2c2fe88) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c300b0 + 0x2c2fea8));
      if (*(int *)(**(int **)(_UNK_02c300b4 + 0x2c2febc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c300b8 + 0x2c2fed8));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x029be154(iVar3,0);
      uVar5 = *(undefined4 *)(param_3 + 0xbc);
      iVar3 = func_0x024eecb8(param_1,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024ef228(&uStack_6c,iVar3,0);
      piVar8 = *(int **)(_UNK_02c300bc + 0x2c2ff3c);
      iVar3 = *piVar8;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x014387a4();
        iVar3 = *piVar8;
      }
      iVar4 = *(int *)(*(int *)(iVar3 + 0x5c) + 8);
      if (iVar4 == 0) {
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x014387a4();
          iVar3 = *piVar8;
        }
        uVar9 = **(undefined4 **)(iVar3 + 0x5c);
        iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02c300c0 + 0x2c2ff8c));
        func_0x0152e3ec(iVar4,uVar9,**(undefined4 **)(_UNK_02c300c4 + 0x2c2ffac),0);
        piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 8);
        *piVar8 = iVar4;
        func_0x014385cc(piVar8,iVar4);
      }
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02b7827c(iVar1,uVar2,param_2,uVar5,uStack_6c,uStack_68,0x3f4ccccd,0,0,0x3e19999a,iVar4,
                      0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5e83,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028fc444(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}

