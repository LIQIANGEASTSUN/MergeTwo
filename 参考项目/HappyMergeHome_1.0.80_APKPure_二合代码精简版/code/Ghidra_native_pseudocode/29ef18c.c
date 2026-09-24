
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029ff18c(undefined4 param_1,float param_2,undefined4 param_3,float param_4,
                 undefined4 param_5,undefined4 param_6,float param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  pcVar8 = (char *)(_UNK_029ff828 + 0x29ff1b4);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029ff82c + 0x29ff1cc));
    func_0x01438628(*(undefined4 *)(_UNK_029ff830 + 0x29ff1d8));
    func_0x01438628(*(undefined4 *)(_UNK_029ff834 + 0x29ff1e4));
    func_0x01438628(*(undefined4 *)(_UNK_029ff838 + 0x29ff1f0));
    func_0x01438628(*(undefined4 *)(_UNK_029ff83c + 0x29ff1fc));
    func_0x01438628(*(undefined4 *)(_UNK_029ff840 + 0x29ff208));
    func_0x01438628(*(undefined4 *)(_UNK_029ff844 + 0x29ff214));
    func_0x01438628(*(undefined4 *)(_UNK_029ff848 + 0x29ff220));
    func_0x01438628(*(undefined4 *)(_UNK_029ff84c + 0x29ff22c));
    func_0x01438628(*(undefined4 *)(_UNK_029ff850 + 0x29ff238));
    func_0x01438628(*(undefined4 *)(_UNK_029ff854 + 0x29ff244));
    func_0x01438628(*(undefined4 *)(_UNK_029ff858 + 0x29ff250));
    func_0x01438628(*(undefined4 *)(_UNK_029ff85c + 0x29ff25c));
    func_0x01438628(*(undefined4 *)(_UNK_029ff860 + 0x29ff268));
    func_0x01438628(*(undefined4 *)(_UNK_029ff864 + 0x29ff274));
    func_0x01438628(*(undefined4 *)(_UNK_029ff868 + 0x29ff280));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2524,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_029ff86c + 0x29ff318));
    func_0x024eeca8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_9;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_9);
    piVar2 = *(int **)(_UNK_029ff870 + 0x29ff350);
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = FUN_029fef18();
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024ef308(iVar3,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_029ff874 + 0x29ff3a4),0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x035e8140(iVar3,**(undefined4 **)(_UNK_029ff878 + 0x29ff3cc));
    if (*(int *)(**(int **)(_UNK_029ff87c + 0x29ff3e4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_029ff880 + 0x29ff400));
    iVar5 = FUN_029fc490();
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uStack_44 = func_0x029ff8b8(iVar5,param_1);
    uVar6 = func_0x01524ffc(&uStack_44,0);
    uVar6 = func_0x014e9568(**(undefined4 **)(_UNK_029ff884 + 0x29ff450),uVar6,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x028598a8(iVar4,**(undefined4 **)(_UNK_029ff888 + 0x29ff478),uVar6,0,0,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x024ef348(iVar3,uVar6,0);
    *(undefined4 *)(iVar1 + 0xc) = param_5;
    *(float *)(iVar1 + 8) = param_4;
    *(undefined4 *)(iVar1 + 0x10) = param_6;
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x024eecb8(iVar3,0);
    if (param_2 <= param_4) {
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar6 = 0x3f800000;
    }
    else {
      uVar6 = 0xbf800000;
      if (iVar4 == 0) {
        func_0x014388e4();
      }
    }
    func_0x024ef328(iVar4,uVar6,0x3f800000,0x3f800000,0);
    if (*(int *)(**(int **)(_UNK_029ff88c + 0x29ff544) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x02af0724(0);
    if (iVar4 != 0) {
      if (iVar3 == 0) {
        func_0x014388e4();
        iVar4 = func_0x024eecb8(0,0);
        func_0x014388e4();
      }
      else {
        iVar4 = func_0x024eecb8(iVar3,0);
      }
      iVar3 = func_0x024eecb8(iVar3,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f1164(&fStack_50,iVar3,0);
      fStack_4c = fStack_4c * _UNK_029ff824;
      fStack_48 = fStack_48 * _UNK_029ff824;
      fStack_50 = fStack_50 * _UNK_029ff824;
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024ef328(iVar4,fStack_50,fStack_4c,fStack_48,0);
    }
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = FUN_029fef18();
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar3,1,0);
    piVar10 = *(int **)(_UNK_029ff890 + 0x29ff658);
    iVar3 = *piVar10;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar10;
    }
    iVar4 = *(int *)(*(int *)(iVar3 + 0x5c) + 4);
    if (iVar4 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x014387a4();
        iVar3 = *piVar10;
      }
      uVar6 = **(undefined4 **)(iVar3 + 0x5c);
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_029ff894 + 0x29ff6a4));
      func_0x0152e3ec(iVar4,uVar6,**(undefined4 **)(_UNK_029ff898 + 0x29ff6c4),0);
      piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 4);
      *piVar10 = iVar4;
      func_0x014385cc(piVar10,iVar4);
    }
    if (*(int *)(**(int **)(_UNK_029ff89c + 0x29ff6f0) + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x029a9e10(param_7 + 0.25,iVar4,0);
    if (*(int *)(**(int **)(_UNK_029ff8a0 + 0x29ff71c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_029ff8a4 + 0x29ff738));
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = FUN_029fef18();
    uVar9 = *(undefined4 *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    uVar11 = *(undefined4 *)(iVar1 + 0x10);
    uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_029ff8a8 + 0x29ff774));
    func_0x0152e3ec(uVar7,iVar1,**(undefined4 **)(_UNK_029ff8ac + 0x29ff794),0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar3,uVar6,param_2,param_3,0,uVar9,uVar12,uVar11,param_8,param_7,0x3f000000,0,
                    uVar7,0,0x3f000000,0x3f800000,0);
    iVar1 = FUN_029fef18();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x2524,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bcb0c(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0)
    ;
  }
  return;
}

