
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd3848(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_r1;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_02bd46ac + 0x2bd3868);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd46b0 + 0x2bd3880));
    func_0x01438628(*(undefined4 *)(_UNK_02bd46b4 + 0x2bd388c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd46b8 + 0x2bd3898));
    func_0x01438628(*(undefined4 *)(_UNK_02bd46bc + 0x2bd38a4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd46c0 + 0x2bd38b0));
    func_0x01438628(*(undefined4 *)(_UNK_02bd46c4 + 0x2bd38bc));
    func_0x01438628(*(undefined4 *)(_UNK_02bd46c8 + 0x2bd38c8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd46cc + 0x2bd38d4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd46d0 + 0x2bd38e0));
    func_0x01438628(*(undefined4 *)(_UNK_02bd46d4 + 0x2bd38ec));
    func_0x01438628(*(undefined4 *)(_UNK_02bd46d8 + 0x2bd38f8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd46dc + 0x2bd3904));
    func_0x01438628(*(undefined4 *)(_UNK_02bd46e0 + 0x2bd3910));
    func_0x01438628(*(undefined4 *)(_UNK_02bd46e4 + 0x2bd391c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd46e8 + 0x2bd3928));
    func_0x01438628(*(undefined4 *)(_UNK_02bd46ec + 0x2bd3934));
    func_0x01438628(*(undefined4 *)(_UNK_02bd46f0 + 0x2bd3940));
    func_0x01438628(*(undefined4 *)(_UNK_02bd46f4 + 0x2bd394c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd46f8 + 0x2bd3958));
    *pcVar6 = '\x01';
  }
  iStack_28 = 0;
  uStack_2c = 0;
  iStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x5cd7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5cd7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028fa0fc(iVar1,param_1,param_2,param_3,param_4,param_5,0);
    return;
  }
  iVar1 = FUN_02bad050(param_1,param_4);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar10 = *(undefined4 **)(_UNK_02bd46fc + 0x2bd3a10);
  iVar1 = func_0x03b780b0(iVar1,param_2,*puVar10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (param_5 == 3) {
    iVar11 = *(int *)(iVar1 + 0x2c) + 1;
    iStack_28 = iVar11;
    iVar1 = FUN_02bad050(param_1,param_4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b780b0(iVar1,param_2,*puVar10);
    if (*(int *)(**(int **)(_UNK_02bd4700 + 0x2bd3a84) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bd4704 + 0x2bd3aa0));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar12 = func_0x026ffbe0(iVar2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar12 = func_0x014e6e04((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),1000,0);
    uVar7 = (undefined4)((ulonglong)uVar12 >> 0x20);
    FUN_026f6e40(iVar1,uVar7,(int)uVar12,uVar7,0);
    iVar1 = FUN_02bad050(param_1,param_4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    puVar10 = *(undefined4 **)(_UNK_02bd4708 + 0x2bd3b30);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b780b0(iVar1,param_2,*puVar10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_026f6fcc(iVar1,iVar11,0);
    iVar1 = FUN_02bad050(param_1,param_4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b780b0(iVar1,param_2,*puVar10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_026f721c(iVar1,*(int *)(iVar1 + 0x40) + -1,0);
    iVar1 = func_0x014386f0(**(undefined4 **)(_UNK_02bd470c + 0x2bd3bd4),6);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar7 = **(undefined4 **)(_UNK_02bd4710 + 0x2bd3bf4);
    if (*(int *)(iVar1 + 0xc) == 0) {
      func_0x014388e8();
    }
    *(undefined4 *)(iVar1 + 0x10) = uVar7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x10),uVar7);
    iVar11 = FUN_02bad050(param_1,param_4);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    iVar11 = *(int *)(iVar11 + 0x10);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    iVar11 = func_0x03b780b0(iVar11,param_2,*puVar10);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)(iVar11 + 8);
    uVar7 = func_0x01524ffc(&uStack_2c,0);
    if (*(uint *)(iVar1 + 0xc) < 2) {
      func_0x014388e8();
    }
    *(undefined4 *)(iVar1 + 0x14) = uVar7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),uVar7);
    uVar7 = **(undefined4 **)(_UNK_02bd4714 + 0x2bd3cb0);
    if (*(uint *)(iVar1 + 0xc) < 3) {
      func_0x014388e8();
    }
    *(undefined4 *)(iVar1 + 0x18) = uVar7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x18),uVar7);
    uVar7 = func_0x01524ffc(&iStack_28,0);
    if (*(uint *)(iVar1 + 0xc) < 4) {
      func_0x014388e8();
    }
    *(undefined4 *)(iVar1 + 0x1c) = uVar7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x1c),uVar7);
    uVar7 = **(undefined4 **)(_UNK_02bd4718 + 0x2bd3d14);
    if (*(uint *)(iVar1 + 0xc) < 5) {
      func_0x014388e8();
    }
    *(undefined4 *)(iVar1 + 0x20) = uVar7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x20),uVar7);
    iVar11 = FUN_02bad050(param_1,param_4);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    iVar11 = *(int *)(iVar11 + 0x10);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    iVar11 = func_0x03b780b0(iVar11,param_2,*puVar10);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)(iVar11 + 0x40);
    uVar7 = func_0x01524ffc(&uStack_2c,0);
    if (*(uint *)(iVar1 + 0xc) < 6) {
      func_0x014388e8();
    }
    *(undefined4 *)(iVar1 + 0x24) = uVar7;
    func_0x014385cc((undefined4 *)(iVar1 + 0x24),uVar7);
    uVar7 = func_0x024eeeb8(iVar1,0);
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x28);
    iStack_30 = iVar1;
    if (*(int *)(**(int **)(_UNK_02bd471c + 0x2bd3dcc) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar10 = *(undefined4 **)(_UNK_02bd4720 + 0x2bd3df0);
    iVar11 = func_0x014e9518(*puVar10);
    iVar2 = FUN_02bad050(param_1,param_4);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x03b780b0(iVar2,param_2,**(undefined4 **)(_UNK_02bd4724 + 0x2bd3e34));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar7 = *(undefined4 *)(iVar2 + 8);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x02c4ab68(iVar11,uVar7,0);
    iVar11 = func_0x014e9518(*puVar10);
    if (*(int *)(**(int **)(_UNK_02bd4728 + 0x2bd3e88) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bd472c + 0x2bd3ea4));
    iVar4 = FUN_02bad050(param_1,param_4);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x03b780b0(iVar4,param_2,**(undefined4 **)(_UNK_02bd4730 + 0x2bd3ee8));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar7 = *(undefined4 *)(iVar4 + 8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar7 = func_0x029a6fa8(iVar2,uVar7,0);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    iVar11 = func_0x02c4af88(iVar11,uVar7,0);
    uVar5 = func_0x02bd496c(param_1,param_4);
    puVar10 = *(undefined4 **)(_UNK_02bd4734 + 0x2bd3f68);
    if ((uVar3 & uVar5) != 1 || iVar11 != 0) {
      iVar11 = FUN_02bad050(param_1,param_4);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      iVar11 = *(int *)(iVar11 + 0x10);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      iVar11 = func_0x03b780b0(iVar11,param_2,*puVar10);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar11 + 8);
      if (*(int *)(**(int **)(_UNK_02bd4738 + 0x2bd3fc0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar11 = func_0x02af8380(uVar7,0);
      if (iVar11 == 0) {
        iVar11 = iVar1 + 1;
        iStack_30 = iVar11;
        iVar1 = FUN_02bad050(param_1,param_4);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x03b780b0(iVar1,param_2,*puVar10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_026f7160(iVar1,*(int *)(iVar1 + 0x3c) + -1,0);
      }
      else {
        if (*(int *)(**(int **)(_UNK_02bd473c + 0x2bd3ff4) + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar8 = *(undefined4 **)(_UNK_02bd4740 + 0x2bd4010);
        iVar11 = func_0x014e9518(*puVar8);
        if (iVar11 == 0) {
          func_0x014388e4();
        }
        iVar11 = func_0x02e797c4(iVar11,0);
        iVar11 = iVar11 + iVar1;
        iStack_30 = iVar11;
        iVar1 = FUN_02bad050(param_1,param_4);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x03b780b0(iVar1,param_2,*puVar10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar1 + 0x3c);
        iVar2 = func_0x014e9518(*puVar8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02e797c4(iVar2,0);
        FUN_026f7160(iVar1,iVar4 - iVar2,0);
        puVar10 = *(undefined4 **)(_UNK_02bd4744 + 0x2bd40c8);
      }
      iVar1 = FUN_02bad050(param_1,param_4);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x03b780b0(iVar1,param_2,*puVar10);
      if (*(int *)(**(int **)(_UNK_02bd4748 + 0x2bd417c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bd474c + 0x2bd4198));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar12 = func_0x026ffbe0(iVar2,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar12 = func_0x014e6e04((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),1000,0);
      uVar7 = (undefined4)((ulonglong)uVar12 >> 0x20);
      FUN_026f6d70(iVar1,uVar7,(int)uVar12,uVar7,0);
      iVar1 = FUN_02bad050(param_1,param_4);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      puVar10 = *(undefined4 **)(_UNK_02bd4750 + 0x2bd4228);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x03b780b0(iVar1,param_2,*puVar10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      FUN_026f6f10(iVar1,iVar11,0);
      iVar1 = func_0x014386f0(**(undefined4 **)(_UNK_02bd4754 + 0x2bd426c),6);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = **(undefined4 **)(_UNK_02bd4758 + 0x2bd428c);
      if (*(int *)(iVar1 + 0xc) == 0) {
        func_0x014388e8();
      }
      *(undefined4 *)(iVar1 + 0x10) = uVar7;
      func_0x014385cc((undefined4 *)(iVar1 + 0x10),uVar7);
      iVar11 = FUN_02bad050(param_1,param_4);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      iVar11 = *(int *)(iVar11 + 0x10);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      iVar11 = func_0x03b780b0(iVar11,param_2,*puVar10);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      uStack_2c = *(undefined4 *)(iVar11 + 8);
      uVar7 = func_0x01524ffc(&uStack_2c,0);
      if (*(uint *)(iVar1 + 0xc) < 2) {
        func_0x014388e8();
      }
      *(undefined4 *)(iVar1 + 0x14) = uVar7;
      func_0x014385cc((undefined4 *)(iVar1 + 0x14),uVar7);
      uVar7 = **(undefined4 **)(_UNK_02bd475c + 0x2bd4348);
      if (*(uint *)(iVar1 + 0xc) < 3) {
        func_0x014388e8();
      }
      *(undefined4 *)(iVar1 + 0x18) = uVar7;
      func_0x014385cc((undefined4 *)(iVar1 + 0x18),uVar7);
      uVar7 = func_0x01524ffc(&iStack_30,0);
      if (*(uint *)(iVar1 + 0xc) < 4) {
        func_0x014388e8();
      }
      *(undefined4 *)(iVar1 + 0x1c) = uVar7;
      func_0x014385cc((undefined4 *)(iVar1 + 0x1c),uVar7);
      uVar7 = **(undefined4 **)(_UNK_02bd4760 + 0x2bd43ac);
      if (*(uint *)(iVar1 + 0xc) < 5) {
        func_0x014388e8();
      }
      *(undefined4 *)(iVar1 + 0x20) = uVar7;
      func_0x014385cc((undefined4 *)(iVar1 + 0x20),uVar7);
      iVar11 = FUN_02bad050(param_1,param_4);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      iVar11 = *(int *)(iVar11 + 0x10);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      iVar11 = func_0x03b780b0(iVar11,param_2,*puVar10);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      uStack_2c = *(undefined4 *)(iVar11 + 0x3c);
      uVar7 = func_0x01524ffc(&uStack_2c,0);
      if (*(uint *)(iVar1 + 0xc) < 6) {
        func_0x014388e8();
      }
      *(undefined4 *)(iVar1 + 0x24) = uVar7;
      func_0x014385cc((undefined4 *)(iVar1 + 0x24),uVar7);
      uVar7 = func_0x024eeeb8(iVar1,0);
      iVar11 = **(int **)(_UNK_02bd4764 + 0x2bd4464);
      iVar1 = *(int *)(iVar11 + 0x1c);
      if (iVar1 == 0) {
        func_0x014909d8(iVar11);
        iVar1 = *(int *)(iVar11 + 0x1c);
      }
      iVar1 = *(int *)(iVar1 + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x0149097c();
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = *(int *)(*(int *)(iVar11 + 0x1c) + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x0149097c();
      }
      uVar9 = **(undefined4 **)(iVar1 + 0x5c);
      if (*(int *)(**(int **)(_UNK_02bd4768 + 0x2bd44c4) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02bd4768 + 0x2bd44c4));
      }
      func_0x026794a8(uVar7,uVar9,0);
    }
    iVar1 = FUN_02bad050(param_1,param_4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b780b0(iVar1,param_2,*puVar10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x3c) != 0) goto LAB_02bd4694;
    iVar1 = FUN_02bad050(param_1,param_4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar12 = func_0x03b780b0(iVar1,param_2,*puVar10);
    uVar7 = (undefined4)((ulonglong)uVar12 >> 0x20);
    iVar1 = (int)uVar12;
    if (iVar1 == 0) {
      func_0x014388e4();
      uVar7 = extraout_r1;
    }
    func_0x02e8d7d0(&uStack_40,uVar7,*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c),0);
    uStack_34 = uStack_3c;
    uStack_38 = uStack_40;
    if (*(int *)(**(int **)(_UNK_02bd476c + 0x2bd45b4) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar7 = func_0x0152489c(&uStack_38,0);
    uVar7 = func_0x014e9568(**(undefined4 **)(_UNK_02bd4770 + 0x2bd45f4),uVar7,0);
  }
  iVar11 = **(int **)(_UNK_02bd4774 + 0x2bd4608);
  iVar1 = *(int *)(iVar11 + 0x1c);
  if (iVar1 == 0) {
    func_0x014909d8(iVar11);
    iVar1 = *(int *)(iVar11 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = *(int *)(*(int *)(iVar11 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  uVar9 = **(undefined4 **)(iVar1 + 0x5c);
  if (*(int *)(**(int **)(_UNK_02bd4778 + 0x2bd4668) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_02bd4778 + 0x2bd4668));
  }
  func_0x026794a8(uVar7,uVar9,0);
LAB_02bd4694:
  func_0x02bd477c(param_1,param_2,param_4);
  return;
}

