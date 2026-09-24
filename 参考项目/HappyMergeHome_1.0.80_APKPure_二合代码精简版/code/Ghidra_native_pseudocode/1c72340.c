
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c82340(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  uint *puStack_34;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  uint uStack_28;
  
  pcVar7 = (char *)(_UNK_01c832c8 + 0x1c82360);
  uStack_28 = param_3;
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c832cc + 0x1c82374));
    func_0x01438628(*(undefined4 *)(_UNK_01c832d0 + 0x1c82380));
    func_0x01438628(*(undefined4 *)(_UNK_01c832d4 + 0x1c8238c));
    func_0x01438628(*(undefined4 *)(_UNK_01c832d8 + 0x1c82398));
    func_0x01438628(*(undefined4 *)(_UNK_01c832dc + 0x1c823a4));
    func_0x01438628(*(undefined4 *)(_UNK_01c832e0 + 0x1c823b0));
    func_0x01438628(*(undefined4 *)(_UNK_01c832e4 + 0x1c823bc));
    func_0x01438628(*(undefined4 *)(_UNK_01c832e8 + 0x1c823c8));
    func_0x01438628(*(undefined4 *)(_UNK_01c832ec + 0x1c823d4));
    func_0x01438628(*(undefined4 *)(_UNK_01c832f0 + 0x1c823e0));
    func_0x01438628(*(undefined4 *)(_UNK_01c832f4 + 0x1c823ec));
    func_0x01438628(*(undefined4 *)(_UNK_01c832f8 + 0x1c823f8));
    func_0x01438628(*(undefined4 *)(_UNK_01c832fc + 0x1c82404));
    func_0x01438628(*(undefined4 *)(_UNK_01c83300 + 0x1c82410));
    func_0x01438628(*(undefined4 *)(_UNK_01c83304 + 0x1c8241c));
    func_0x01438628(*(undefined4 *)(_UNK_01c83308 + 0x1c82428));
    func_0x01438628(*(undefined4 *)(_UNK_01c8330c + 0x1c82434));
    func_0x01438628(*(undefined4 *)(_UNK_01c83310 + 0x1c82440));
    func_0x01438628(*(undefined4 *)(_UNK_01c83314 + 0x1c8244c));
    func_0x01438628(*(undefined4 *)(_UNK_01c83318 + 0x1c82458));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xad2a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xad2a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puStack_38 = (undefined1 *)0x0;
    uVar2 = func_0x0289ffc0(iVar1,param_1,param_2,uStack_28);
    return uVar2;
  }
  if (param_2 == 0) {
    iVar1 = 0;
    iVar3 = 0;
    puVar10 = *(undefined4 **)(_UNK_01c8331c + 0x1c82774);
    puVar11 = *(undefined4 **)(_UNK_01c83320 + 0x1c8277c);
    while( true ) {
      iVar4 = FUN_01c733a0(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0xc) <= iVar1) break;
      iVar4 = FUN_01c733a0(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x03b780b0(iVar4,iVar1,*puVar10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar4 + 0x10) == '\0') {
        iVar4 = FUN_01c733a0(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x03b780b0(iVar4,iVar1,*puVar10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar4 + 0x28) == '\0') {
          iVar4 = FUN_01c733a0(param_1);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = *(int *)(iVar4 + 0x10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = func_0x03b780b0(iVar4,iVar1,*puVar10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          if (*(char *)(iVar4 + 0x39) == '\0') {
            if (((*(int *)(param_1 + 0x44) != 0) && (iVar3 < 5)) &&
               (*(int *)(*(int *)(param_1 + 0x44) + 0x24) != 2)) {
              uVar2 = FUN_01c68288(param_1);
              iVar4 = FUN_01c733a0(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar4 + 0x10);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x03b780b0(iVar4,iVar1,*puVar10);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar3 = iVar3 + 1;
              FUN_01c81920(param_1,uVar2,iVar3,*(undefined4 *)(iVar4 + 0xc));
            }
            iVar4 = FUN_01c733a0(param_1);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = *(int *)(iVar4 + 0x10);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            func_0x03b77b90(iVar4,iVar1,*puVar11);
            iVar1 = iVar1 + -1;
          }
        }
      }
      iVar1 = iVar1 + 1;
    }
    iVar1 = 0;
    puVar11 = *(undefined4 **)(_UNK_01c8336c + 0x1c82988);
    while( true ) {
      iVar3 = FUN_01c733a0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0xc) <= iVar1) break;
      iVar3 = FUN_01c733a0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x03b780b0(iVar3,iVar1,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026b048c(iVar3,0,0);
      iVar3 = FUN_01c733a0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x03b780b0(iVar3,iVar1,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026b03d0(iVar3,0,0);
      iVar3 = FUN_01c733a0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar13 = func_0x03b780b0(iVar3,iVar1,*puVar10);
      uVar2 = (undefined4)((ulonglong)uVar13 >> 0x20);
      if ((int)uVar13 == 0) {
        func_0x014388e4();
        uVar2 = extraout_r1_00;
      }
      puStack_38 = (undefined1 *)0x0;
      func_0x026b0548((int)uVar13,uVar2,0,0);
      iVar3 = FUN_01c733a0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x03b780b0(iVar3,iVar1,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026b0618(iVar3,0,0);
      iVar3 = FUN_01c733a0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x03b780b0(iVar3,iVar1,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026b06d4(iVar3,iVar1,0);
      iVar3 = FUN_01c733a0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x03b780b0(iVar3,iVar1,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026b09c4(iVar3,0,0);
      iVar3 = FUN_01c733a0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x03b780b0(iVar3,iVar1,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026b0908(iVar3,0,0);
      iVar3 = FUN_01c733a0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x03b780b0(iVar3,iVar1,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x14);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b74598(iVar3,*puVar11);
      iVar3 = FUN_01c733a0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar2 = *(undefined4 *)(iVar3 + 8);
      uVar9 = *(undefined4 *)(iVar3 + 0xc);
      if (*(int *)(param_1 + 0x44) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x14);
      }
      iVar3 = FUN_01c733a0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar13 = func_0x03b780b0(iVar3,iVar1,*puVar10);
      puStack_34 = (uint *)uVar13;
      puStack_38 = (undefined1 *)uVar5;
      func_0x01c834ac(param_1,(int)((ulonglong)uVar13 >> 0x20),uVar2,uVar9);
      iVar1 = iVar1 + 1;
    }
  }
  else {
    if (*(int *)(**(int **)(_UNK_01c83324 + 0x1c824c8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01c83328 + 0x1c824e4));
    piVar6 = *(int **)(_UNK_01c8332c + 0x1c824f8);
    iVar3 = *piVar6;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar6;
    }
    iVar8 = **(int **)(_UNK_01c83330 + 0x1c82518);
    iVar4 = *(int *)(iVar8 + 0x1c);
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x2e4);
    if (iVar4 == 0) {
      func_0x014909d8(iVar8);
      iVar4 = *(int *)(iVar8 + 0x1c);
    }
    iVar3 = *(int *)(iVar4 + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x0149097c();
    }
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x0149097c();
    }
    uVar9 = **(undefined4 **)(iVar3 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02990414(iVar1,uVar2,uVar9,0);
    iVar1 = FUN_01c733a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b71ec0(iVar1,**(undefined4 **)(_UNK_01c83334 + 0x1c825d0));
    iVar1 = FUN_01c733a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b776fc(iVar1,**(undefined4 **)(_UNK_01c83338 + 0x1c8260c));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01c8333c + 0x1c82620));
    func_0x026b0a78(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x026b030c(iVar1,1,0);
    if (*(int *)(**(int **)(_UNK_01c83340 + 0x1c82658) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar10 = *(undefined4 **)(_UNK_01c83344 + 0x1c82674);
    iVar3 = func_0x014e9518(*puVar10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    puVar11 = *(undefined4 **)(_UNK_01c83348 + 0x1c82698);
    iVar3 = func_0x036c7bec(iVar3,*puVar11);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x110);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar3 + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x026b017c(iVar1,uVar2,0);
    iVar3 = func_0x014e9518(*puVar10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x036c7bec(iVar3,*puVar11);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x110);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar3 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
      func_0x026b0250(0,uVar2,0);
      func_0x014388e4();
      func_0x026b048c(0,0,0);
      func_0x014388e4();
      func_0x026b03d0(0,0,0);
      func_0x014388e4();
      uVar2 = extraout_r1_01;
    }
    else {
      func_0x026b0250(iVar1,uVar2,0);
      func_0x026b048c(iVar1,0,0);
      func_0x026b03d0(iVar1,0,0);
      uVar2 = extraout_r1;
    }
    puStack_38 = (undefined1 *)0x0;
    func_0x026b0548(iVar1,uVar2,0,0);
    iVar3 = FUN_01c733a0(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar3 + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
      func_0x026b06d4(0,uVar2,0);
      func_0x014388e4();
      func_0x026b0618(0,0,0);
      func_0x014388e4();
    }
    else {
      func_0x026b06d4(iVar1,uVar2,0);
      func_0x026b0618(iVar1,0,0);
    }
    func_0x026b09c4(iVar1,0,0);
    iVar3 = FUN_01c733a0(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x03b77610(iVar3,iVar1,**(undefined4 **)(_UNK_01c8334c + 0x1c82e34));
    FUN_01c7a7d4(param_1,0,0,0xffffffff);
    if (0 < (int)uStack_28) {
      iVar1 = 0;
      uVar12 = 0;
      puVar10 = *(undefined4 **)(_UNK_01c83350 + 0x1c82e70);
      do {
        iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01c83354 + 0x1c82e78));
        func_0x026b0a78(iVar3,0);
        if (iVar3 == 0) {
          func_0x014388e4(uVar12 * -0x33333333);
        }
        func_0x026b030c(iVar3,0,0);
        if (*(int *)(**(int **)(_UNK_01c83358 + 0x1c82ebc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x03b2c734(*puVar10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x029b6878(iVar4,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x026b017c(iVar3,uVar2,0);
        iVar4 = func_0x03b2c734(*puVar10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar2 = *(undefined4 *)(iVar4 + 0x60);
        if (*(int *)(**(int **)(_UNK_01c8335c + 0x1c82f34) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x0364a714(uVar2,0,**(undefined4 **)(_UNK_01c83360 + 0x1c82f58));
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar2 = *(undefined4 *)(iVar4 + 8);
        if (iVar3 == 0) {
          func_0x014388e4();
          func_0x026b0250(0,uVar2,0);
          func_0x014388e4();
          func_0x026b048c(0,0,0);
          func_0x014388e4();
          func_0x026b03d0(0,0,0);
          func_0x014388e4();
          uVar2 = extraout_r1_03;
        }
        else {
          func_0x026b0250(iVar3,uVar2,0);
          func_0x026b048c(iVar3,0,0);
          func_0x026b03d0(iVar3,0,0);
          uVar2 = extraout_r1_02;
        }
        puStack_38 = (undefined1 *)0x0;
        func_0x026b0548(iVar3,uVar2,0,0);
        iVar4 = FUN_01c733a0(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar2 = *(undefined4 *)(iVar4 + 0xc);
        if (iVar3 == 0) {
          func_0x014388e4();
          func_0x026b06d4(0,uVar2,0);
          func_0x014388e4();
          func_0x026b0618(0,0,0);
          func_0x014388e4();
          func_0x026b09c4(0,0,0);
          func_0x014388e4();
        }
        else {
          func_0x026b06d4(iVar3,uVar2,0);
          func_0x026b0618(iVar3,0,0);
          func_0x026b09c4(iVar3,0,0);
        }
        func_0x026b0908(iVar3,0,0);
        iVar4 = *(int *)(param_1 + 0x48);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x024f0530(iVar4,0,**(undefined4 **)(_UNK_01c83364 + 0x1c830e0));
        if ((int)uVar12 < iVar4 + -1) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          FUN_01c7a7d4(param_1,0,uVar12 + 1,*(undefined4 *)(iVar3 + 0xc));
        }
        else if (iVar1 < 5) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          FUN_01c81920(param_1,0,uVar12 + (uVar12 / 5) * -5 + 1,*(undefined4 *)(iVar3 + 0xc));
          iVar1 = iVar1 + 1;
        }
        iVar4 = FUN_01c733a0(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(param_1 + 0x44) == 0) {
          puStack_38 = (undefined1 *)0x0;
        }
        else {
          puStack_38 = *(undefined1 **)(*(int *)(param_1 + 0x44) + 0x14);
        }
        puStack_34 = (uint *)iVar3;
        func_0x01c834ac(param_1,*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 8),
                        *(undefined4 *)(iVar4 + 0xc));
        iVar4 = FUN_01c733a0(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x03b77610(iVar4,iVar3,**(undefined4 **)(_UNK_01c83368 + 0x1c831c8));
        uVar12 = uVar12 + 1;
      } while (uStack_28 != uVar12);
    }
  }
  if (*(int *)(**(int **)(_UNK_01c83370 + 0x1c831ec) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01c83374 + 0x1c83208));
  piVar6 = *(int **)(_UNK_01c83378 + 0x1c8321c);
  iVar3 = *piVar6;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar6;
  }
  iVar8 = **(int **)(_UNK_01c8337c + 0x1c8323c);
  iVar4 = *(int *)(iVar8 + 0x1c);
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x2c8);
  if (iVar4 == 0) {
    func_0x014909d8(iVar8);
    iVar4 = *(int *)(iVar8 + 0x1c);
  }
  iVar3 = *(int *)(iVar4 + 8);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = func_0x0149097c();
  }
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = func_0x0149097c();
  }
  uVar9 = **(undefined4 **)(iVar3 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar7 = (char *)(_UNK_029903f0 + 0x29901d4);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar2,uVar9,0);
    func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
    func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
    func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
    *pcVar7 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar3 = func_0x02953fd4(0x226,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x14);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar3,uVar2,**(undefined4 **)(_UNK_02990404 + 0x2990298));
    uVar5 = 0;
    if (iVar3 != 0) {
      iVar3 = *(int *)(iVar1 + 0x14);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x0475399c(iVar3,uVar2,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
      if (iVar3 != 0) {
        iVar3 = *(int *)(iVar1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f2f10(iVar3,0);
        if (iVar3 == 0) {
          iVar3 = *(int *)(iVar1 + 0x10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x024f2f20(iVar3,200,0);
          if (iVar3 == 0) {
            return 0;
          }
        }
        puStack_34 = &uStack_28;
        puStack_38 = auStack_30;
        puStack_3c = &stack0xffffffdc;
        uStack_40 = 0;
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
        func_0x0298fd74(uVar5,uVar2,uVar9);
        iVar1 = *(int *)(iVar1 + 0x18);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03a39760(iVar1,uVar5,**(undefined4 **)(_UNK_02990410 + 0x299038c));
        func_0x010b8c68(&uStack_40);
        uVar5 = 1;
      }
    }
  }
  else {
    iVar3 = func_0x029540a4(0x226,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar5 = func_0x02871898(iVar3,iVar1,uVar2,uVar9,0);
  }
  return uVar5;
}

