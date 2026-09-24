
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bf7238(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  byte bVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
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
  int iStack_30;
  undefined4 uStack_2c;
  byte bStack_25;
  
  pcVar9 = (char *)(_UNK_02bf8194 + 0x2bf725c);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bf8198 + 0x2bf7270));
    func_0x01438628(*(undefined4 *)(_UNK_02bf819c + 0x2bf727c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81a0 + 0x2bf7288));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81a4 + 0x2bf7294));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81a8 + 0x2bf72a0));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81ac + 0x2bf72ac));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81b0 + 0x2bf72b8));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81b4 + 0x2bf72c4));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81b8 + 0x2bf72d0));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81bc + 0x2bf72dc));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81c0 + 0x2bf72e8));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81c4 + 0x2bf72f4));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81c8 + 0x2bf7300));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81cc + 0x2bf730c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81d0 + 0x2bf7318));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81d4 + 0x2bf7324));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81d8 + 0x2bf7330));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81dc + 0x2bf733c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81e0 + 0x2bf7348));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81e4 + 0x2bf7354));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81e8 + 0x2bf7360));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81ec + 0x2bf736c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81f0 + 0x2bf7378));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81f4 + 0x2bf7384));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81f8 + 0x2bf7390));
    func_0x01438628(*(undefined4 *)(_UNK_02bf81fc + 0x2bf739c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf8200 + 0x2bf73a8));
    *pcVar9 = '\x01';
  }
  bStack_25 = 0;
  uStack_2c = 0;
  iStack_30 = 0;
  iVar3 = func_0x02953fd4(0x5e8f,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5e8f,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x028fc82c(iVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02bf8204 + 0x2bf7438) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar15 = *(undefined4 **)(_UNK_02bf8208 + 0x2bf7454);
  iVar3 = func_0x014e9518(*puVar15);
  piVar10 = *(int **)(_UNK_02bf820c + 0x2bf7468);
  iVar4 = *piVar10;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x014387a4();
    iVar4 = *piVar10;
  }
  uVar11 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x8c);
  piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bf8210 + 0x2bf7498),2);
  uStack_58 = 3;
  iVar4 = func_0x014387ac(**(undefined4 **)(_UNK_02bf8214 + 0x2bf74b8),&uStack_58);
  if (piVar5 == (int *)0x0) {
    func_0x014388e4();
  }
  if ((iVar4 != 0) && (iVar6 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar5 + 0x20)), iVar6 == 0))
  {
    uVar7 = func_0x01438904();
    func_0x01438790(uVar7,0);
  }
  if (piVar5[3] == 0) {
    func_0x014388e8();
  }
  piVar5[4] = iVar4;
  func_0x014385cc(piVar5 + 4,iVar4);
  puVar14 = *(undefined4 **)(_UNK_02bf8218 + 0x2bf7534);
  uStack_34 = 1;
  iVar4 = func_0x014387ac(*puVar14,&uStack_34);
  if ((iVar4 != 0) && (iVar6 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar5 + 0x20)), iVar6 == 0))
  {
    uVar7 = func_0x01438904();
    func_0x01438790(uVar7,0);
  }
  if ((uint)piVar5[3] < 2) {
    func_0x014388e8();
  }
  piVar5[5] = iVar4;
  func_0x014385cc(piVar5 + 5,iVar4);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar3,uVar11,piVar5,0);
  iVar3 = func_0x014e9518(*puVar15);
  uVar11 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x10);
  piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bf821c + 0x2bf75d0),3);
  puVar15 = *(undefined4 **)(_UNK_02bf8220 + 0x2bf75f0);
  uStack_38 = 4;
  iVar4 = func_0x014387ac(*puVar15,&uStack_38);
  if (piVar5 == (int *)0x0) {
    func_0x014388e4();
  }
  if ((iVar4 != 0) && (iVar6 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar5 + 0x20)), iVar6 == 0))
  {
    uVar7 = func_0x01438904();
    func_0x01438790(uVar7,0);
  }
  if (piVar5[3] == 0) {
    func_0x014388e8();
  }
  piVar5[4] = iVar4;
  func_0x014385cc(piVar5 + 4,iVar4);
  uStack_3c = 1;
  iVar4 = func_0x014387ac(*puVar14,&uStack_3c);
  if ((iVar4 != 0) && (iVar6 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar5 + 0x20)), iVar6 == 0))
  {
    uVar7 = func_0x01438904();
    func_0x01438790(uVar7,0);
  }
  if ((uint)piVar5[3] < 2) {
    func_0x014388e8();
  }
  piVar5[5] = iVar4;
  func_0x014385cc(piVar5 + 5,iVar4);
  uStack_40 = 1;
  iVar4 = func_0x014387ac(*puVar14,&uStack_40);
  if ((iVar4 != 0) && (iVar6 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar5 + 0x20)), iVar6 == 0))
  {
    uVar7 = func_0x01438904();
    func_0x01438790(uVar7,0);
  }
  if ((uint)piVar5[3] < 3) {
    func_0x014388e8();
  }
  piVar5[6] = iVar4;
  func_0x014385cc(piVar5 + 6,iVar4);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar3,uVar11,piVar5,0);
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bf8224 + 0x2bf774c));
  uVar11 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x30);
  piVar10 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bf8228 + 0x2bf7768),3);
  uStack_44 = 4;
  iVar4 = func_0x014387ac(*puVar15,&uStack_44);
  if (piVar10 == (int *)0x0) {
    func_0x014388e4();
  }
  if ((iVar4 != 0) && (iVar6 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar10 + 0x20)), iVar6 == 0))
  {
    uVar7 = func_0x01438904();
    func_0x01438790(uVar7,0);
  }
  if (piVar10[3] == 0) {
    func_0x014388e8();
  }
  piVar10[4] = iVar4;
  func_0x014385cc(piVar10 + 4,iVar4);
  uStack_48 = 1;
  iVar4 = func_0x014387ac(*puVar14,&uStack_48);
  if ((iVar4 != 0) && (iVar6 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar10 + 0x20)), iVar6 == 0))
  {
    uVar7 = func_0x01438904();
    func_0x01438790(uVar7,0);
  }
  if ((uint)piVar10[3] < 2) {
    func_0x014388e8();
  }
  piVar10[5] = iVar4;
  func_0x014385cc(piVar10 + 5,iVar4);
  uStack_4c = 1;
  iVar4 = func_0x014387ac(*puVar14,&uStack_4c);
  if ((iVar4 != 0) && (iVar6 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar10 + 0x20)), iVar6 == 0))
  {
    uVar7 = func_0x01438904();
    func_0x01438790(uVar7,0);
  }
  if ((uint)piVar10[3] < 3) {
    func_0x014388e8();
  }
  piVar10[6] = iVar4;
  func_0x014385cc(piVar10 + 6,iVar4);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar3,uVar11,piVar10,0);
  if (*(int *)(**(int **)(_UNK_02bf822c + 0x2bf78e4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bf8230 + 0x2bf7900));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar3,0);
  if (*(int *)(**(int **)(_UNK_02bf8234 + 0x2bf792c) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar15 = *(undefined4 **)(_UNK_02bf8238 + 0x2bf7948);
  iVar3 = func_0x014e9518(*puVar15);
  piVar10 = param_1 + 4;
  iVar4 = *piVar10;
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  FUN_02bd2cf0(iVar3,param_2,param_3,1,param_6,iVar4,0xffffffff,1,param_4,0,0);
  iVar3 = func_0x014e9518(*puVar15);
  iVar4 = *piVar10;
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  FUN_02bd3598(iVar3,param_2,param_5,iVar4,0);
  iVar3 = func_0x014e9518(*puVar15);
  iVar4 = *piVar10;
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar6 = 0;
  FUN_02bd0b60(iVar3,param_3,param_2,iVar4,param_7,0);
  uVar2 = FUN_02bf6cf8(param_1,param_2);
  if (((param_8 != 0) && (iVar3 = func_0x02bf8280(param_1,param_2,param_4), iVar3 != 0)) ||
     (iVar3 = func_0x02bf8684(param_1,param_2,param_3,param_4), iVar3 == 0)) {
    iVar3 = func_0x02bf93c8(param_1,param_2,param_3,param_4);
    bVar13 = 1;
    if (iVar3 != 0) goto LAB_02bf7aa4;
    iVar6 = func_0x02bf9ba4(param_1,param_2,param_3,param_4);
  }
  bVar13 = 0;
LAB_02bf7aa4:
  if (*(int *)(**(int **)(_UNK_02bf823c + 0x2bf7ab0) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar15 = *(undefined4 **)(_UNK_02bf8240 + 0x2bf7ad0);
  iVar3 = func_0x014e9518(*puVar15);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x029a6fa8(iVar3,param_3,0);
  iVar4 = func_0x014e9518(*puVar15);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x029a6fa8(iVar4,param_4,0);
  if (iVar3 == 0) {
    func_0x014388e4();
    piVar5 = (int *)0x2c;
    uVar11 = func_0x01524ffc(0x2c,0);
    func_0x014388e4();
  }
  else {
    piVar5 = (int *)(iVar3 + 0x2c);
    uVar11 = func_0x01524ffc(piVar5,0);
  }
  uVar7 = **(undefined4 **)(_UNK_02bf8248 + 0x2bf7b7c);
  if (*piVar5 < 8) {
    uVar7 = uVar11;
  }
  if (*(int *)(**(int **)(_UNK_02bf8244 + 0x2bf7b70) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_02bf824c + 0x2bf7ba8));
  uVar11 = func_0x014e9568(**(undefined4 **)(_UNK_02bf8250 + 0x2bf7bc8),uVar7,0);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  func_0x02029de4(iVar8,uVar11,0x3f800000,0);
  bStack_25 = bVar13 | (byte)iVar6;
  uStack_2c = 0;
  iStack_30 = 0;
  if (bVar13 == 0) {
    iVar8 = (**(code **)(*param_1 + 0x108))
                      (param_1,param_2,iVar3,iVar4,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar8 != 0) {
      iStack_30 = *(int *)(iVar8 + 0x2c);
      uStack_2c = *(undefined4 *)(iVar8 + 0x30);
      bStack_25 = 1;
    }
  }
  else {
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)(iVar3 + 0x30);
    iStack_30 = *piVar5;
  }
  if (iVar6 != 0) {
    if (*(int *)(**(int **)(_UNK_02bf8254 + 0x2bf7c88) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x014e9518(*puVar15);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x029a6fa8(iVar6,0x2711,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iStack_30 = *(int *)(iVar6 + 0x2c);
    uStack_2c = *(undefined4 *)(iVar6 + 0x30);
  }
  if (*piVar10 == 0) {
    iVar6 = func_0x02b3dda0(0);
    piVar12 = *(int **)(_UNK_02bf8258 + 0x2bf7d08);
    iVar8 = **(int **)(*piVar12 + 0x5c);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x02c3d868(iVar8,0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = FUN_02beba7c(iVar8,param_2);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar8 + 0xc);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x024eecb8(iVar8,0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    func_0x024ef228(&uStack_58,iVar8,0);
    uVar1 = uStack_50;
    uVar7 = uStack_54;
    uVar11 = uStack_58;
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x02b4d350(iVar6,iVar3,uVar11,uVar7,uVar1,0);
    iVar6 = func_0x031e695c(0);
    iVar8 = **(int **)(*piVar12 + 0x5c);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x02c3d868(iVar8,0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = FUN_02beba7c(iVar8,param_2);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar8 + 0xc);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x024eecb8(iVar8,0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    func_0x024ef228(&uStack_58,iVar8,0);
    uVar1 = uStack_50;
    uVar7 = uStack_54;
    uVar11 = uStack_58;
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x031e7ea4(iVar6,iVar3,uVar11,uVar7,uVar1,0);
    iVar6 = func_0x01b188f4(0);
    iVar8 = **(int **)(*piVar12 + 0x5c);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x02c3d868(iVar8,0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = FUN_02beba7c(iVar8,param_2);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar8 + 0xc);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x024eecb8(iVar8,0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    func_0x024ef228(&uStack_58,iVar8,0);
    uVar11 = uStack_58;
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x01b1ee2c(iVar6,iVar3,uVar11,uStack_54,uStack_50,0);
    iVar6 = func_0x01cca620(0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar11 = *(undefined4 *)(iVar3 + 8);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x01ccfae0(iVar6,param_2,uVar11,param_1,0);
  }
  if (*(int *)(**(int **)(_UNK_02bf825c + 0x2bf7fbc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x0202346c(0);
  iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02bf8260 + 0x2bf7fe8));
  func_0x02025440(iVar8,0);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar8 + 8) = 0;
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar11 = *(undefined4 *)(iVar4 + 0x2c);
  *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)(iVar8 + 0x10) = uVar11;
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar4 = *piVar5;
  uVar7 = *(undefined4 *)(iVar3 + 8);
  uVar11 = **(undefined4 **)(_UNK_02bf8264 + 0x2bf803c);
  *(undefined1 *)(iVar8 + 0x24) = uVar2;
  *(undefined4 *)(iVar8 + 0x14) = uVar7;
  *(int *)(iVar8 + 0x18) = iVar4;
  iVar3 = func_0x014388d4(uVar11);
  func_0x04752f54(iVar3,**(undefined4 **)(_UNK_02bf8268 + 0x2bf8068));
  if (*(int *)(**(int **)(_UNK_02bf826c + 0x2bf807c) + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar11 = func_0x01523fec(&bStack_25,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar15 = *(undefined4 **)(_UNK_02bf8270 + 0x2bf80bc);
  func_0x04753a34(iVar3,**(undefined4 **)(_UNK_02bf8274 + 0x2bf80c8),uVar11,*puVar15);
  uVar11 = func_0x01524ffc(&uStack_2c,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x04753a34(iVar3,**(undefined4 **)(_UNK_02bf8278 + 0x2bf8100),uVar11,*puVar15);
  uVar11 = func_0x01524ffc(&iStack_30,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x04753a34(iVar3,**(undefined4 **)(_UNK_02bf827c + 0x2bf8138),uVar11,*puVar15);
  *(int *)(iVar8 + 0x2c) = iVar3;
  func_0x014385cc((int *)(iVar8 + 0x2c),iVar3);
  uVar11 = func_0x01524ffc(piVar10,0);
  *(undefined4 *)(iVar8 + 0x28) = uVar11;
  func_0x014385cc();
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  func_0x02024d08(iVar6,iVar8,0,0);
  return;
}

