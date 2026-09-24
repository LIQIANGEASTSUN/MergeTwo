
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd2cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02bd351c + 0x2bd2d18);
  uStack_28 = param_3;
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd3520 + 0x2bd2d2c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd3524 + 0x2bd2d38));
    func_0x01438628(*(undefined4 *)(_UNK_02bd3528 + 0x2bd2d44));
    func_0x01438628(*(undefined4 *)(_UNK_02bd352c + 0x2bd2d50));
    func_0x01438628(*(undefined4 *)(_UNK_02bd3530 + 0x2bd2d5c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd3534 + 0x2bd2d68));
    func_0x01438628(*(undefined4 *)(_UNK_02bd3538 + 0x2bd2d74));
    func_0x01438628(*(undefined4 *)(_UNK_02bd353c + 0x2bd2d80));
    func_0x01438628(*(undefined4 *)(_UNK_02bd3540 + 0x2bd2d8c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd3544 + 0x2bd2d98));
    func_0x01438628(*(undefined4 *)(_UNK_02bd3548 + 0x2bd2da4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd354c + 0x2bd2db0));
    func_0x01438628(*(undefined4 *)(_UNK_02bd3550 + 0x2bd2dbc));
    func_0x01438628(*(undefined4 *)(_UNK_02bd3554 + 0x2bd2dc8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1d79,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02bd3558 + 0x2bd2e5c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd355c + 0x2bd2e78));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02c4b828(iVar1,param_3,0);
    uVar7 = param_4;
    if (iVar1 != 3) {
      uVar7 = 3;
    }
    if (iVar1 < 1) {
      uVar7 = param_4;
    }
    if (iVar1 == 4) {
      iVar1 = FUN_02bad050(param_1,param_6);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar9 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bd356c + 0x2bd2fe0));
      uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
      if ((int)uVar9 == 0) {
        func_0x014388e4();
        uVar4 = extraout_r1;
      }
      FUN_026f7520((int)uVar9,uVar4,0,0,0);
    }
    else if (iVar1 == 3) {
      iVar1 = FUN_02bad050(param_1,param_6);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bd3560 + 0x2bd2f08));
      if (*(int *)(**(int **)(_UNK_02bd3564 + 0x2bd2f20) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bd3568 + 0x2bd2f3c));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar9 = func_0x026ffbe0(iVar2,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar9 = func_0x014e6e04((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),1000,0);
      uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
      FUN_026f7520(iVar1,uVar4,(int)uVar9,uVar4,0);
    }
    iVar1 = FUN_02bad050(param_1,param_6);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar8 = *(undefined4 **)(_UNK_02bd3570 + 0x2bd3050);
    iVar1 = func_0x03b780b0(iVar1,param_2,*puVar8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_026f6bf8(iVar1,uVar7,0);
    iVar1 = FUN_02bad050(param_1,param_6);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b780b0(iVar1,param_2,*puVar8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_026f6b3c(iVar1,param_3,0);
    iVar1 = FUN_02bad050(param_1,param_6);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b780b0(iVar1,param_2,*puVar8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_026f7d8c(iVar1,param_10,0);
    iVar1 = FUN_02bad050(param_1,param_6);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar7 = func_0x03b780b0(iVar1,param_2,*puVar8);
    FUN_02bd1794(param_1,uVar7);
    FUN_02bb18c4(param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,
                 **(undefined4 **)(_UNK_02bd3574 + 0x2bd3190));
    if (*(int *)(**(int **)(_UNK_02bd3578 + 0x2bd31c4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd357c + 0x2bd31e0));
    piVar5 = *(int **)(_UNK_02bd3580 + 0x2bd31f8);
    iVar2 = *piVar5;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar5;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x34);
    piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bd3584 + 0x2bd321c),6);
    puVar8 = *(undefined4 **)(_UNK_02bd3588 + 0x2bd323c);
    uStack_2c = param_6;
    iVar2 = func_0x014387ac(*puVar8,&uStack_2c);
    if (piVar5 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)
       ) {
      uVar4 = func_0x01438904();
      func_0x01438790(uVar4,0);
    }
    if (piVar5[3] == 0) {
      func_0x014388e8();
    }
    piVar5[4] = iVar2;
    func_0x014385cc(piVar5 + 4,iVar2);
    uStack_30 = param_2;
    iVar2 = func_0x014387ac(*puVar8,&uStack_30);
    if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)
       ) {
      uVar4 = func_0x01438904();
      func_0x01438790(uVar4,0);
    }
    if ((uint)piVar5[3] < 2) {
      func_0x014388e8();
    }
    piVar5[5] = iVar2;
    func_0x014385cc(piVar5 + 5,iVar2);
    uStack_34 = param_7;
    iVar2 = func_0x014387ac(*puVar8,&uStack_34);
    if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)
       ) {
      uVar4 = func_0x01438904();
      func_0x01438790(uVar4,0);
    }
    if ((uint)piVar5[3] < 3) {
      func_0x014388e8();
    }
    piVar5[6] = iVar2;
    func_0x014385cc(piVar5 + 6,iVar2);
    uStack_38 = param_5;
    iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bd358c + 0x2bd3378),&uStack_38);
    if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)
       ) {
      uVar4 = func_0x01438904();
      func_0x01438790(uVar4,0);
    }
    if ((uint)piVar5[3] < 4) {
      func_0x014388e8();
    }
    piVar5[7] = iVar2;
    func_0x014385cc(piVar5 + 7,iVar2);
    uStack_3c = uStack_28;
    iVar2 = func_0x014387ac(*puVar8,&uStack_3c);
    if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)
       ) {
      uVar4 = func_0x01438904();
      func_0x01438790(uVar4,0);
    }
    if ((uint)piVar5[3] < 5) {
      func_0x014388e8();
    }
    piVar5[8] = iVar2;
    func_0x014385cc(piVar5 + 8,iVar2);
    uStack_40 = param_9;
    iVar2 = func_0x014387ac(*puVar8,&uStack_40);
    if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)
       ) {
      uVar4 = func_0x01438904();
      func_0x01438790(uVar4,0);
    }
    if ((uint)piVar5[3] < 6) {
      func_0x014388e8();
    }
    piVar5[9] = iVar2;
    func_0x014385cc(piVar5 + 9,iVar2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02990414(iVar1,uVar7,piVar5,0);
    if (*(int *)(**(int **)(_UNK_02bd3590 + 0x2bd34c0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_02bd3594 + 0x2bd34dc));
    uVar7 = func_0x01524ffc(&uStack_28,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0298b684(iVar1,0,uVar7,0);
  }
  else {
    iVar1 = func_0x029540a4(0x1d79,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028b5a18(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    param_10,0);
  }
  return;
}

