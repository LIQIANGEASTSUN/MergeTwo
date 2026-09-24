
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4b844(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02b4bda8 + 0x2b4b86c);
  uStack_28 = param_12;
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4bdac + 0x2b4b8a8));
    func_0x01438628(*(undefined4 *)(_UNK_02b4bdb0 + 0x2b4b8b4));
    func_0x01438628(*(undefined4 *)(_UNK_02b4bdb4 + 0x2b4b8c0));
    func_0x01438628(*(undefined4 *)(_UNK_02b4bdb8 + 0x2b4b8cc));
    func_0x01438628(*(undefined4 *)(_UNK_02b4bdbc + 0x2b4b8d8));
    func_0x01438628(*(undefined4 *)(_UNK_02b4bdc0 + 0x2b4b8e4));
    func_0x01438628(*(undefined4 *)(_UNK_02b4bdc4 + 0x2b4b8f0));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2ed9,0);
  uVar3 = uStack_28;
  if (iVar2 == 0) {
    func_0x029f063c(param_1,param_2,param_3);
    if (*(int *)(**(int **)(_UNK_02b4bdc8 + 0x2b4b9d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02b4bdcc + 0x2b4b9ec));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x020c0780(iVar2,uVar3,0);
    (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    iVar2 = FUN_02b3ebc0(param_1);
    if (((iVar2 == 0) && (iVar2 = FUN_02b42188(), iVar2 == 0)) &&
       (iVar2 = func_0x02b4bde4(param_1), iVar2 == 0)) {
      *(undefined1 *)(param_1 + 0x13) = 1;
    }
    func_0x02b4c120(param_1);
    iVar2 = FUN_02b3ebc0(param_1);
    if (iVar2 != 0) {
      uVar10 = FUN_02b3ebc0(param_1);
      uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
      iVar2 = param_1[6];
      iVar9 = param_1[7];
      if ((int)uVar10 == 0) {
        func_0x014388e4();
        uVar3 = extraout_r1;
      }
      func_0x026a18f8((int)uVar10,uVar3,iVar2,iVar9,0);
      uVar10 = FUN_02b3ebc0(param_1);
      uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
      iVar2 = param_1[8];
      iVar9 = param_1[9];
      if ((int)uVar10 == 0) {
        func_0x014388e4();
        uVar3 = extraout_r1_00;
      }
      func_0x026a19c8((int)uVar10,uVar3,iVar2,iVar9,0);
      iVar2 = FUN_02b3ebc0(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar9 = *(int *)(iVar2 + 0x20);
      iVar2 = FUN_02b3dda0();
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar3 = FUN_02b414d4(iVar2);
      if (*(int *)(**(int **)(_UNK_02b4bdd0 + 0x2b4bb20) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar3 = func_0x024f05c4(uVar3,0);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x026a2368(iVar9,uVar3,0);
      iVar2 = FUN_02b3ebc0(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar9 = *(int *)(iVar2 + 0x20);
      uVar10 = FUN_02b3ebc0(param_1);
      uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
      iVar2 = (int)uVar10;
      if (iVar2 == 0) {
        func_0x014388e4();
        uVar3 = extraout_r1_01;
      }
      uVar6 = *(undefined4 *)(iVar2 + 0x38);
      uVar7 = *(undefined4 *)(iVar2 + 0x3c);
      if (iVar9 == 0) {
        func_0x014388e4();
        uVar3 = extraout_r1_02;
      }
      func_0x026a250c(iVar9,uVar3,uVar6,uVar7,0);
      iVar2 = FUN_02b3ebc0(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar9 = *(int *)(iVar2 + 0x20);
      uVar10 = FUN_02b3ebc0(param_1);
      uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
      iVar2 = (int)uVar10;
      if (iVar2 == 0) {
        func_0x014388e4();
        uVar3 = extraout_r1_03;
      }
      uVar6 = *(undefined4 *)(iVar2 + 0x30);
      uVar7 = *(undefined4 *)(iVar2 + 0x34);
      if (iVar9 == 0) {
        func_0x014388e4();
        uVar3 = extraout_r1_04;
      }
      func_0x026a243c(iVar9,uVar3,uVar6,uVar7,0);
      iVar2 = FUN_02b3dda0();
      uVar3 = FUN_02b4985c(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_02b49db4(iVar2,uVar3);
      param_1[0x11] = iVar2;
      iVar2 = FUN_02b3dda0();
      uVar3 = FUN_02b3e290(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_02b49db4(iVar2,uVar3);
      param_1[0x12] = iVar2;
      iVar2 = FUN_02b4a6f4(param_1);
      param_1[0x10] = iVar2;
      iVar2 = FUN_02b3df18(param_1);
      param_1[0xf] = iVar2;
    }
    uVar1 = FUN_02b495f4(param_1);
    *(undefined1 *)((int)param_1 + 0x5d) = uVar1;
    uVar3 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
    uVar3 = func_0x014e9568(**(undefined4 **)(_UNK_02b4bdd4 + 0x2b4bcc0),uVar3,0);
    iVar9 = **(int **)(_UNK_02b4bdd8 + 0x2b4bcd4);
    iVar2 = *(int *)(iVar9 + 0x1c);
    if (iVar2 == 0) {
      func_0x014909d8(iVar9);
      iVar2 = *(int *)(iVar9 + 0x1c);
    }
    iVar2 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x0149097c();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x0149097c();
    }
    uVar6 = **(undefined4 **)(iVar2 + 0x5c);
    if (*(int *)(**(int **)(_UNK_02b4bddc + 0x2b4bd34) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_02b4bddc + 0x2b4bd34));
    }
    func_0x026794a8(uVar3,uVar6,0);
    if (*(int *)(**(int **)(_UNK_02b4bde0 + 0x2b4bd6c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x02b40cf0();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b41708(iVar2);
    pcVar5 = (char *)(_UNK_02b4c520 + 0x2b4c308);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02b4c524 + 0x2b4c31c));
      func_0x01438628(*(undefined4 *)(_UNK_02b4c528 + 0x2b4c328));
      func_0x01438628(*(undefined4 *)(_UNK_02b4c52c + 0x2b4c334));
      func_0x01438628(*(undefined4 *)(_UNK_02b4c530 + 0x2b4c340));
      func_0x01438628(*(undefined4 *)(_UNK_02b4c534 + 0x2b4c34c));
      func_0x01438628(*(undefined4 *)(_UNK_02b4c538 + 0x2b4c358));
      func_0x01438628(*(undefined4 *)(_UNK_02b4c53c + 0x2b4c364));
      *pcVar5 = '\x01';
    }
    uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_28 = 0;
    iVar2 = func_0x02953fd4(0x2ee3,0);
    if (iVar2 == 0) {
      iVar2 = func_0x02b4ed88();
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_02b4c540 + 0x2b4c3dc));
      iVar2 = func_0x03626668(uVar6,**(undefined4 **)(_UNK_02b4c544 + 0x2b4c3f0));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_28,iVar2,**(undefined4 **)(_UNK_02b4c548 + 0x2b4c418));
      puVar8 = *(undefined4 **)(_UNK_02b4c54c + 0x2b4c42c);
      puVar4 = *(undefined4 **)(_UNK_02b4c550 + 0x2b4c434);
      while (iVar2 = func_0x04878f14(&uStack_28,*puVar8), iVar2 != 0) {
        iVar2 = func_0x02b4ed88();
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x03b73d40(iVar2,uVar3,*puVar4);
        func_0x02b4ee90();
      }
      func_0x04878f10(&uStack_28,**(undefined4 **)(_UNK_02b4c554 + 0x2b4c480));
    }
    else {
      iVar2 = func_0x029540a4(0x2ee3,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02868e1c(iVar2,param_1,0);
    }
    return;
  }
  iVar2 = func_0x029540a4(0x2ed9,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x028ba094(iVar2,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,uStack_28,param_13,0);
  return;
}

