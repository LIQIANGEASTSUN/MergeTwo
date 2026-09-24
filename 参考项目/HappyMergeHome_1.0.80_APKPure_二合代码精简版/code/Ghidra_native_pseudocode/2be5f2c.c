
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bf5f2c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(iRam02bf69e8 + 0x2bf5f54);
  uStack_28 = param_4;
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bf69ec + 0x2bf5f68));
    func_0x01438628(*(undefined4 *)(_UNK_02bf69f0 + 0x2bf5f74));
    func_0x01438628(*(undefined4 *)(_UNK_02bf69f4 + 0x2bf5f80));
    func_0x01438628(*(undefined4 *)(_UNK_02bf69f8 + 0x2bf5f8c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf69fc + 0x2bf5f98));
    func_0x01438628(*(undefined4 *)(_UNK_02bf6a00 + 0x2bf5fa4));
    func_0x01438628(*(undefined4 *)(_UNK_02bf6a04 + 0x2bf5fb0));
    func_0x01438628(*(undefined4 *)(_UNK_02bf6a08 + 0x2bf5fbc));
    func_0x01438628(*(undefined4 *)(_UNK_02bf6a0c + 0x2bf5fc8));
    func_0x01438628(*(undefined4 *)(_UNK_02bf6a10 + 0x2bf5fd4));
    func_0x01438628(*(undefined4 *)(_UNK_02bf6a14 + 0x2bf5fe0));
    func_0x01438628(*(undefined4 *)(_UNK_02bf6a18 + 0x2bf5fec));
    func_0x01438628(*(undefined4 *)(_UNK_02bf6a1c + 0x2bf5ff8));
    func_0x01438628(*(undefined4 *)(_UNK_02bf6a20 + 0x2bf6004));
    func_0x01438628(*(undefined4 *)(_UNK_02bf6a24 + 0x2bf6010));
    func_0x01438628(*(undefined4 *)(_UNK_02bf6a28 + 0x2bf601c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf6a2c + 0x2bf6028));
    func_0x01438628(*(undefined4 *)(_UNK_02bf6a30 + 0x2bf6034));
    func_0x01438628(*(undefined4 *)(_UNK_02bf6a34 + 0x2bf6040));
    *pcVar4 = '\x01';
  }
  iStack_2c = 0;
  iVar1 = func_0x02953fd4(0x5d6a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d6a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028fb544(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0)
    ;
    return;
  }
  if (*(int *)(**(int **)(_UNK_02bf6a38 + 0x2bf60d8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bf6a3c + 0x2bf60f4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029a6fa8(iVar1,param_4,0);
  if (iVar1 == 0) {
    func_0x01438638(*(undefined4 *)(_UNK_02bf6aa4 + 0x2bf6938));
    func_0x010ae4c0();
    func_0x01438638(*(undefined4 *)(_UNK_02bf6aa8 + 0x2bf6948));
    uVar2 = func_0x010b98d8();
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    func_0x010af2ec();
    uVar6 = func_0x01438638(*(undefined4 *)(_UNK_02bf6aac + 0x2bf6964));
    FUN_02bda8ac(uVar2,param_2,uVar7,uVar6,1,0);
    uVar2 = func_0x01524ffc(&uStack_28,0);
    uVar6 = func_0x01438638(*(undefined4 *)(_UNK_02bf6ab0 + 0x2bf699c));
    uVar2 = func_0x014e9568(uVar6,uVar2,0);
    func_0x01438638(*(undefined4 *)(_UNK_02bf6ab4 + 0x2bf69b8));
    uVar6 = func_0x014388d4();
    func_0x014e95c8(uVar6,uVar2,0);
    uVar2 = func_0x01438638(*(undefined4 *)(_UNK_02bf6ab8 + 0x2bf69d8));
    func_0x01438790(uVar6,uVar2);
    func_0x014385d0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(int *)(**(int **)(_UNK_02bf6a40 + 0x2bf6130) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bf6a44 + 0x2bf614c));
  iVar5 = *(int *)(param_1 + 0x44);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar5 + 0xc) <= param_2) {
    func_0x014388e8();
  }
  iVar5 = *(int *)(iVar5 + param_2 * 4 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x02c3f4b4(iVar5,0);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  FUN_02be1c50(iVar1,uVar2,param_2,uVar6,0);
  if (param_5 != 0) {
    if (*(int *)(**(int **)(_UNK_02bf6a48 + 0x2bf61e8) + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x024eed10(**(undefined4 **)(_UNK_02bf6a4c + 0x2bf6208),0);
    if (*(int *)(**(int **)(_UNK_02bf6a50 + 0x2bf6218) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar10 = *(undefined4 **)(_UNK_02bf6a54 + 0x2bf6238);
    iVar1 = func_0x014e9518(*puVar10);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_02bda8ac(iVar1,param_2,uVar2,**(undefined4 **)(_UNK_02bf6a58 + 0x2bf626c),1,0);
    iVar1 = func_0x014e9518(*puVar10);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_02bd2cf0(iVar1,param_2,param_4,param_7,param_6,uVar2,param_2,1,0xffffffff,0,0);
    if (*(int *)(**(int **)(_UNK_02bf6a5c + 0x2bf62d4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_02bf6a60 + 0x2bf62f0));
    iVar5 = **(int **)(**(int **)(_UNK_02bf6a64 + 0x2bf6304) + 0x5c);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x02c3d868(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    FUN_02bed744(&uStack_38,iVar5,param_2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02c38268(iVar1,uStack_38,uStack_34,uStack_30,0);
    return;
  }
  puVar9 = *(undefined4 **)(_UNK_02bf6a68 + 0x2bf6394);
  piVar8 = *(int **)(_UNK_02bf6a6c + 0x2bf63a0);
  puVar10 = *(undefined4 **)(_UNK_02bf6a70 + 0x2bf63a8);
  if (param_6 != 0xe) {
    iVar1 = param_6;
    if (param_2 != 0xffffffff) {
      iVar1 = param_7;
    }
    if ((param_2 != 0xffffffff && iVar1 != 2) && (param_8 == 0)) {
      if (*(int *)(**(int **)(_UNK_02bf6a74 + 0x2bf63d0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar9);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      FUN_02bd3848(iVar1,param_2,param_4,uVar2,param_6,0);
    }
  }
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(*puVar10);
  piVar8 = *(int **)(_UNK_02bf6a78 + 0x2bf644c);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(*puVar9);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = FUN_02bad204(iVar5,param_2,uVar2,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar2 = *(undefined4 *)(iVar5 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029a6fa8(iVar1,uVar2,0);
  iVar5 = func_0x014e9518(*puVar9);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = FUN_02bad204(iVar5,param_2,uVar2,0);
  if (param_6 == 3) {
    if (*(int *)(**(int **)(_UNK_02bf6a7c + 0x2bf650c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bf6a80 + 0x2bf6528));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x0202998c(iVar3,0x2c,0,0);
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x40) < 1)) {
      iVar3 = *(int *)(iVar5 + 0x38);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0xc) < 2) {
        FUN_026f782c(iVar5,*(int *)(iVar5 + 0x70) + 1,0);
      }
    }
  }
  if (*(int *)(**(int **)(_UNK_02bf6a84 + 0x2bf65a0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bf6a88 + 0x2bf65bc));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x02c4ae48(iVar3,iVar1,iVar5,0,0);
  if (iVar5 != 0) {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x014e9518(*puVar9);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    FUN_02bda8ac(iVar5,param_2,uVar2,**(undefined4 **)(_UNK_02bf6a8c + 0x2bf6638),1,0);
    iVar5 = func_0x014e9518(*puVar9);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar6 = *(undefined4 *)(iVar1 + 0xb8);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    FUN_02bd2cf0(iVar5,param_2,uVar6,param_7,param_6,uVar2,param_2,1,0xffffffff,0,0);
    if (*(int *)(**(int **)(_UNK_02bf6a90 + 0x2bf66c0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_02bf6a94 + 0x2bf66dc));
    FUN_02bed744(&uStack_38,param_1,param_2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02c38268(iVar1,uStack_38,uStack_34,uStack_30,0);
  }
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(*puVar9);
  uVar2 = uStack_28;
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  FUN_02bd2cf0(iVar1,param_3,uVar2,param_7,param_6,uVar6,param_2,1,0xffffffff,param_9,0);
  piVar8 = *(int **)(_UNK_02bf6a98 + 0x2bf67a4);
  iVar1 = **(int **)(*piVar8 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b67abc(iVar1,3,0);
  if (iVar1 != 0) {
    iVar1 = **(int **)(*piVar8 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02b667ac(iVar1,0);
    iVar1 = func_0x015fcde8(uVar2,0);
    if (iVar1 == 0) {
      iVar1 = func_0x024eeee8(uVar2,0);
      iVar5 = *(int *)(param_1 + 0x44);
      iStack_2c = iVar1;
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar5 + 0xc) <= param_2) {
        func_0x014388e8();
      }
      iVar5 = *(int *)(iVar5 + param_2 * 4 + 0x10);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x02c3f4b4(iVar5,0);
      if (iVar1 != iVar5) goto LAB_02bf68d8;
      iVar1 = **(int **)(*piVar8 + 0x5c);
      uVar2 = func_0x01524ffc(&iStack_2c,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
    }
    else {
      iVar1 = **(int **)(*piVar8 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = 0;
    }
    func_0x02b65c74(iVar1,3,uVar2,0,0);
  }
LAB_02bf68d8:
  if (*(int *)(**(int **)(_UNK_02bf6a9c + 0x2bf68e4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bf6aa0 + 0x2bf6900));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  FUN_02b9f600(iVar1,0,0);
  return;
}

