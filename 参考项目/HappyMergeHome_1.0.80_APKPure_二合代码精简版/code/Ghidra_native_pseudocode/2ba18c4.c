
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bb18c4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                 undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02bb1a70 + 0x2bb18e8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb1a74 + 0x2bb18fc));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1a78 + 0x2bb1908));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1a7c + 0x2bb1914));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1a80 + 0x2bb1920));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1a84 + 0x2bb192c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1a88 + 0x2bb1938));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1a8c + 0x2bb1944));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1a90 + 0x2bb1950));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1a94 + 0x2bb195c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1a98 + 0x2bb1968));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1a9c + 0x2bb1974));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1aa0 + 0x2bb1980));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1aa4 + 0x2bb198c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1aa8 + 0x2bb1998));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1aac + 0x2bb19a4));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1ab0 + 0x2bb19b0));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1ab4 + 0x2bb19bc));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1ab8 + 0x2bb19c8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1abc + 0x2bb19d4));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1ac0 + 0x2bb19e0));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1ac4 + 0x2bb19ec));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1d7b,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02bb1ac8 + 0x2bb1b20) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bb1acc + 0x2bb1b3c));
    piVar7 = *(int **)(_UNK_02bb1ad0 + 0x2bb1b50);
    iVar2 = *piVar7;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar7;
    }
    uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
    piVar3 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bb1ad4 + 0x2bb1b78),3);
    puVar9 = *(undefined4 **)(_UNK_02bb1ad8 + 0x2bb1b98);
    iStack_44 = 2;
    iVar2 = func_0x014387ac(*puVar9,&iStack_44);
    if (piVar3 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar2 != 0) && (iVar4 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if (piVar3[3] == 0) {
      func_0x014388e8();
    }
    piVar3[4] = iVar2;
    func_0x014385cc(piVar3 + 4,iVar2);
    uStack_28 = param_3;
    iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bb1adc + 0x2bb1c0c),&uStack_28);
    if ((iVar2 != 0) && (iVar4 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar3[3] < 2) {
      func_0x014388e8();
    }
    piVar3[5] = iVar2;
    func_0x014385cc(piVar3 + 5,iVar2);
    uStack_2c = 1;
    iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bb1ae0 + 0x2bb1c7c),&uStack_2c);
    if ((iVar2 != 0) && (iVar4 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar3[3] < 3) {
      func_0x014388e8();
    }
    piVar3[6] = iVar2;
    func_0x014385cc(piVar3 + 6,iVar2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar1,uVar8,piVar3,0);
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bb1ae4 + 0x2bb1d04));
    uVar8 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x30);
    piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bb1ae8 + 0x2bb1d20),3);
    uStack_30 = 2;
    iVar2 = func_0x014387ac(*puVar9,&uStack_30);
    if (piVar7 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar2 != 0) && (iVar4 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if (piVar7[3] == 0) {
      func_0x014388e8();
    }
    piVar7[4] = iVar2;
    func_0x014385cc(piVar7 + 4,iVar2);
    uStack_34 = param_3;
    iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bb1aec + 0x2bb1db4),&uStack_34);
    if ((iVar2 != 0) && (iVar4 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar7[3] < 2) {
      func_0x014388e8();
    }
    piVar7[5] = iVar2;
    func_0x014385cc(piVar7 + 5,iVar2);
    uStack_38 = 1;
    iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bb1af0 + 0x2bb1e24),&uStack_38);
    if ((iVar2 != 0) && (iVar4 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar7[3] < 3) {
      func_0x014388e8();
    }
    piVar7[6] = iVar2;
    func_0x014385cc(piVar7 + 6,iVar2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar1,uVar8,piVar7,0);
    iVar1 = FUN_02bad050(param_1,param_5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar9 = *(undefined4 **)(_UNK_02bb1af4 + 0x2bb1ee0);
    iVar1 = func_0x03b780b0(iVar1,param_2,*puVar9);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_026f6b3c(iVar1,param_3,0);
    iVar1 = FUN_02bad050(param_1,param_5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b780b0(iVar1,param_2,*puVar9);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_026f7b38(iVar1,param_9,0);
    *(undefined1 *)(param_1 + 0x20) = 1;
    if ((param_4 & 0xfffffffe) == 10) {
      iVar1 = FUN_02bad050(param_1,param_5);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x03b780b0(iVar1,param_2,*puVar9);
      func_0x02bd1794(param_1,uVar8);
      if (param_5 == 0) {
        iVar1 = func_0x022c7240(0);
        iVar2 = **(int **)(**(int **)(_UNK_02bb1af8 + 0x2bb1fdc) + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02c3d868(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02beba7c(iVar2,param_2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024eecb8(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&iStack_44,iVar2,0);
        uVar5 = uStack_3c;
        uVar8 = uStack_40;
        iVar2 = iStack_44;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x022cedd0(iVar1,param_3,iVar2,uVar8,uVar5,**(undefined4 **)(_UNK_02bb1afc + 0x2bb2094)
                        ,0);
        iVar1 = func_0x01ac796c(0);
        iVar2 = **(int **)(**(int **)(_UNK_02bb1b00 + 0x2bb20c0) + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02c3d868(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02beba7c(iVar2,param_2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024eecb8(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&iStack_44,iVar2,0);
        uVar5 = uStack_3c;
        uVar8 = uStack_40;
        iVar2 = iStack_44;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x01acd3ec(iVar1,param_3,iVar2,uVar8,uVar5,**(undefined4 **)(_UNK_02bb1b04 + 0x2bb2178)
                        ,0);
        iVar1 = func_0x01f5e608(0);
        iVar2 = **(int **)(**(int **)(_UNK_02bb1b08 + 0x2bb21a4) + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02c3d868(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02beba7c(iVar2,param_2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024eecb8(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&iStack_44,iVar2,0);
        uVar5 = uStack_3c;
        uVar8 = uStack_40;
        iVar2 = iStack_44;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x01f63344(iVar1,param_3,iVar2,uVar8,uVar5,**(undefined4 **)(_UNK_02bb1b0c + 0x2bb225c)
                        ,0);
        iVar1 = func_0x01d46fb4(0);
        iVar2 = **(int **)(**(int **)(_UNK_02bb1b10 + 0x2bb2288) + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02c3d868(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02beba7c(iVar2,param_2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024eecb8(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&iStack_44,iVar2,0);
        uVar5 = uStack_3c;
        uVar8 = uStack_40;
        iVar2 = iStack_44;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x01d4c490(iVar1,param_3,iVar2,uVar8,uVar5,**(undefined4 **)(_UNK_02bb3330 + 0x2bb2340)
                        ,0);
        iVar1 = func_0x01a10520(0);
        iVar2 = **(int **)(**(int **)(_UNK_02bb3334 + 0x2bb236c) + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02c3d868(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02beba7c(iVar2,param_2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024eecb8(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&iStack_44,iVar2,0);
        uVar5 = uStack_3c;
        uVar8 = uStack_40;
        iVar2 = iStack_44;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x01a15a1c(iVar1,param_3,iVar2,uVar8,uVar5,**(undefined4 **)(_UNK_02bb3338 + 0x2bb2424)
                        ,0);
        iVar1 = func_0x019d1a6c(0);
        iVar2 = **(int **)(**(int **)(_UNK_02bb333c + 0x2bb2450) + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02c3d868(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02beba7c(iVar2,param_2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024eecb8(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&iStack_44,iVar2,0);
        uVar5 = uStack_3c;
        uVar8 = uStack_40;
        iVar2 = iStack_44;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x019d74c4(iVar1,param_3,iVar2,uVar8,uVar5,**(undefined4 **)(_UNK_02bb3340 + 0x2bb2508)
                        ,0);
        iVar1 = func_0x01c681c4(0);
        iVar2 = **(int **)(**(int **)(_UNK_02bb3344 + 0x2bb2534) + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02c3d868(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02beba7c(iVar2,param_2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024eecb8(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&iStack_44,iVar2,0);
        uVar5 = uStack_3c;
        uVar8 = uStack_40;
        iVar2 = iStack_44;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x01c85da4(iVar1,param_3,iVar2,uVar8,uVar5,**(undefined4 **)(_UNK_02bb3348 + 0x2bb25ec)
                        ,0);
        iVar1 = func_0x01f7b124(0);
        iVar2 = **(int **)(**(int **)(_UNK_02bb334c + 0x2bb2618) + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02c3d868(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02beba7c(iVar2,param_2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024eecb8(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&iStack_44,iVar2,0);
        uVar5 = uStack_3c;
        uVar8 = uStack_40;
        iVar2 = iStack_44;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x01f8010c(iVar1,param_3,iVar2,uVar8,uVar5,0);
        iVar1 = func_0x01cc105c(0);
        iVar2 = **(int **)(**(int **)(_UNK_02bb3350 + 0x2bb26ec) + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x02c3d868(iVar2,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x01cc5c14(iVar1,param_2,uVar8,0);
        iVar1 = func_0x01cca620(0);
        iVar2 = **(int **)(**(int **)(_UNK_02bb3354 + 0x2bb2748) + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x02c3d868(iVar2,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x01ccea8c(iVar1,param_2,uVar8,0);
        iVar1 = func_0x01c988e8(0);
        iVar2 = **(int **)(**(int **)(_UNK_02bb3358 + 0x2bb27a4) + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02c3d868(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02beba7c(iVar2,param_2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024eecb8(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&iStack_44,iVar2,0);
        uVar5 = uStack_3c;
        uVar8 = uStack_40;
        iVar2 = iStack_44;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x01c9e16c(iVar1,param_3,iVar2,uVar8,uVar5,**(undefined4 **)(_UNK_02bb335c + 0x2bb285c)
                        ,0);
        iVar1 = func_0x01c8d8d0(0);
        iVar2 = **(int **)(**(int **)(_UNK_02bb3360 + 0x2bb2888) + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02c3d868(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02beba7c(iVar2,param_2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024eecb8(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&iStack_44,iVar2,0);
        uVar5 = uStack_3c;
        uVar8 = uStack_40;
        iVar2 = iStack_44;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x01c94ff4(iVar1,param_3,iVar2,uVar8,uVar5,**(undefined4 **)(_UNK_02bb3364 + 0x2bb2940)
                        ,0);
        iVar1 = func_0x01ca5be0(0);
        iVar2 = **(int **)(**(int **)(_UNK_02bb3368 + 0x2bb296c) + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02c3d868(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02beba7c(iVar2,param_2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024eecb8(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&iStack_44,iVar2,0);
        iVar2 = iStack_44;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x01ca77b4(iVar1,param_3,iVar2,uStack_40,uStack_3c,
                        **(undefined4 **)(_UNK_02bb336c + 0x2bb2a24),0);
        iVar1 = func_0x019b4c90(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x019bfa8c(iVar1,2,1,0);
        iVar1 = func_0x0199d2c4(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x019a66a4(iVar1,2,1,0);
        iVar1 = func_0x019ac0bc(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x019b2c40(iVar1,2,1,0);
        if (*(int *)(**(int **)(_UNK_02bb3370 + 0x2bb2acc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bb3374 + 0x2bb2ae8));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024356c8(iVar1,2,1,0);
        if (*(int *)(**(int **)(_UNK_02bb3378 + 0x2bb2b20) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bb337c + 0x2bb2b3c));
        piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bb3380 + 0x2bb2b54),3);
        iStack_44 = 0;
        iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bb3384 + 0x2bb2b6c),&iStack_44);
        if (piVar7 == (int *)0x0) {
          func_0x014388e4();
        }
        if ((iVar2 != 0) &&
           (iVar4 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)) {
          uVar8 = func_0x01438904();
          func_0x01438790(uVar8,0);
        }
        if (piVar7[3] == 0) {
          func_0x014388e8();
        }
        piVar7[4] = iVar2;
        func_0x014385cc(piVar7 + 4,iVar2);
        uStack_28 = param_2;
        iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bb3388 + 0x2bb2be0),&uStack_28);
        if ((iVar2 != 0) &&
           (iVar4 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)) {
          uVar8 = func_0x01438904();
          func_0x01438790(uVar8,0);
        }
        if ((uint)piVar7[3] < 2) {
          func_0x014388e8();
        }
        piVar7[5] = iVar2;
        func_0x014385cc(piVar7 + 5,iVar2);
        uStack_2c = param_3;
        iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bb338c + 0x2bb2c44),&uStack_2c);
        if ((iVar2 != 0) &&
           (iVar4 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)) {
          uVar8 = func_0x01438904();
          func_0x01438790(uVar8,0);
        }
        if ((uint)piVar7[3] < 3) {
          func_0x014388e8();
        }
        piVar7[6] = iVar2;
        func_0x014385cc(piVar7 + 6,iVar2);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar1,**(undefined4 **)(_UNK_02bb3390 + 0x2bb2cc4),piVar7,0);
      }
    }
    if (*(int *)(**(int **)(_UNK_02bb3394 + 0x2bb2cdc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bb3398 + 0x2bb2cf8));
    iVar2 = FUN_02bad050(param_1,param_5);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x03b780b0(iVar2,param_2,*puVar9);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar8 = *(undefined4 *)(iVar2 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029a6fa8(iVar1,uVar8,0);
    if (*(int *)(**(int **)(_UNK_02bb339c + 0x2bb2d7c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bb33a0 + 0x2bb2d98));
    iVar4 = FUN_02bad050(param_1,param_5);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x03b780b0(iVar4,param_2,*puVar9);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar8 = *(undefined4 *)(iVar4 + 8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02c4ad50(iVar2,uVar8,0);
    if (iVar2 != 0) {
      iVar2 = FUN_02bad050(param_1,param_5);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x03b780b0(iVar2,param_2,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar2 + 0x20) == 0 && *(int *)(iVar2 + 0x24) == 0) {
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0xe8) < 1) {
          iVar1 = FUN_02bad050(param_1,param_5);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x03b780b0(iVar1,param_2,*puVar9);
          if (*(int *)(**(int **)(_UNK_02bb33a4 + 0x2bb2ed0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bb33a8 + 0x2bb2eec));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar10 = func_0x026ffbe0(iVar2,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar10 = func_0x014e6e04((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
          uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
          FUN_026f6e40(iVar1,uVar8,(int)uVar10,uVar8,0);
        }
      }
    }
    iVar1 = FUN_02bad050(param_1,param_5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x03b780b0(iVar1,param_2,*puVar9);
    func_0x02bd2afc(param_1,uVar8,param_4,param_5);
    if (param_7 != 0) {
      if (*(int *)(**(int **)(_UNK_02bb33ac + 0x2bb2fb8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bb33b0 + 0x2bb2fd4));
      piVar7 = *(int **)(_UNK_02bb33b4 + 0x2bb2fe8);
      iVar2 = *piVar7;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar7;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
      piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bb33b8 + 0x2bb300c),6);
      iStack_44 = param_5;
      iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bb33bc + 0x2bb302c),&iStack_44);
      if (piVar7 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar2 != 0) &&
         (iVar4 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)) {
        uVar5 = func_0x01438904();
        func_0x01438790(uVar5,0);
      }
      if (piVar7[3] == 0) {
        func_0x014388e8();
      }
      piVar7[4] = iVar2;
      func_0x014385cc(piVar7 + 4,iVar2);
      uStack_28 = param_2;
      iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bb33c0 + 0x2bb30a4),&uStack_28);
      if ((iVar2 != 0) &&
         (iVar4 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)) {
        uVar5 = func_0x01438904();
        func_0x01438790(uVar5,0);
      }
      if ((uint)piVar7[3] < 2) {
        func_0x014388e8();
      }
      piVar7[5] = iVar2;
      func_0x014385cc(piVar7 + 5,iVar2);
      uStack_2c = param_6;
      iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bb33c4 + 0x2bb310c),&uStack_2c);
      if ((iVar2 != 0) &&
         (iVar4 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)) {
        uVar5 = func_0x01438904();
        func_0x01438790(uVar5,0);
      }
      if ((uint)piVar7[3] < 3) {
        func_0x014388e8();
      }
      piVar7[6] = iVar2;
      func_0x014385cc(piVar7 + 6,iVar2);
      uStack_30 = param_4;
      iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bb33c8 + 0x2bb3174),&uStack_30);
      if ((iVar2 != 0) &&
         (iVar4 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)) {
        uVar5 = func_0x01438904();
        func_0x01438790(uVar5,0);
      }
      if ((uint)piVar7[3] < 4) {
        func_0x014388e8();
      }
      piVar7[7] = iVar2;
      func_0x014385cc(piVar7 + 7,iVar2);
      uStack_34 = param_3;
      iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bb33cc + 0x2bb31e0),&uStack_34);
      if ((iVar2 != 0) &&
         (iVar4 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)) {
        uVar5 = func_0x01438904();
        func_0x01438790(uVar5,0);
      }
      if ((uint)piVar7[3] < 5) {
        func_0x014388e8();
      }
      piVar7[8] = iVar2;
      func_0x014385cc(piVar7 + 8,iVar2);
      uStack_38 = param_8;
      iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bb33d0 + 0x2bb3250),&uStack_38);
      if ((iVar2 != 0) &&
         (iVar4 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)) {
        uVar5 = func_0x01438904();
        func_0x01438790(uVar5,0);
      }
      if ((uint)piVar7[3] < 6) {
        func_0x014388e8();
      }
      piVar7[9] = iVar2;
      func_0x014385cc(piVar7 + 9,iVar2);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02990414(iVar1,uVar8,piVar7,0);
    }
    func_0x02bd204c(param_1,param_3);
    iVar1 = FUN_02bad050(param_1,param_5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x03b780b0(iVar1,param_2,*puVar9);
    func_0x02bd2354(param_1,uVar8,param_2);
  }
  else {
    iVar1 = func_0x029540a4(0x1d7b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028b57ec(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0)
    ;
  }
  return;
}

