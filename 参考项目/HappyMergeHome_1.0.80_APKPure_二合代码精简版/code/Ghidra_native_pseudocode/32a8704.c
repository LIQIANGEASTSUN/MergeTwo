
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b8704(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_032b91d4 + 0x32b871c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b91d8 + 0x32b8730));
    func_0x01438628(*(undefined4 *)(_UNK_032b91dc + 0x32b873c));
    func_0x01438628(*(undefined4 *)(_UNK_032b91e0 + 0x32b8748));
    func_0x01438628(*(undefined4 *)(_UNK_032b91e4 + 0x32b8754));
    func_0x01438628(*(undefined4 *)(_UNK_032b91e8 + 0x32b8760));
    func_0x01438628(*(undefined4 *)(_UNK_032b91ec + 0x32b876c));
    func_0x01438628(*(undefined4 *)(_UNK_032b91f0 + 0x32b8778));
    func_0x01438628(*(undefined4 *)(_UNK_032b91f4 + 0x32b8784));
    func_0x01438628(*(undefined4 *)(_UNK_032b91f8 + 0x32b8790));
    func_0x01438628(*(undefined4 *)(_UNK_032b91fc + 0x32b879c));
    func_0x01438628(*(undefined4 *)(_UNK_032b9200 + 0x32b87a8));
    func_0x01438628(*(undefined4 *)(_UNK_032b9204 + 0x32b87b4));
    func_0x01438628(*(undefined4 *)(_UNK_032b9208 + 0x32b87c0));
    func_0x01438628(*(undefined4 *)(_UNK_032b920c + 0x32b87cc));
    func_0x01438628(*(undefined4 *)(_UNK_032b9210 + 0x32b87d8));
    func_0x01438628(*(undefined4 *)(_UNK_032b9214 + 0x32b87e4));
    func_0x01438628(*(undefined4 *)(_UNK_032b9218 + 0x32b87f0));
    func_0x01438628(*(undefined4 *)(_UNK_032b921c + 0x32b87fc));
    func_0x01438628(*(undefined4 *)(_UNK_032b9220 + 0x32b8808));
    func_0x01438628(*(undefined4 *)(_UNK_032b9224 + 0x32b8814));
    *pcVar5 = '\x01';
  }
  iVar2 = *param_1;
  iVar6 = param_1[6];
  iStack_28 = 0;
  if (iVar2 == 0) {
    *param_1 = -1;
    iStack_28 = param_1[0xc];
    param_1[0xc] = 0;
LAB_032b8bd8:
    func_0x05055ca8(&iStack_28,0);
    if (*(int *)(**(int **)(_UNK_032b9264 + 0x32b8bf0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_032a7050(0);
    if ((iVar2 == 0) || (iVar2 = func_0x032b92a0(iVar2,(char)param_1[0xb]), iVar2 == 0)) {
      iVar2 = 0;
      func_0x014388e4();
    }
    iStack_28 = func_0x051ed6a0(iVar2,0);
    iVar2 = func_0x05055bbc(&iStack_28,0);
    if (iVar2 == 0) {
      *param_1 = 1;
      param_1[0xc] = iStack_28;
      func_0x014385cc(param_1 + 0xc,0);
      func_0x035b1bc0(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_032b9268 + 0x32b8d48));
      return;
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        *param_1 = -1;
        iStack_28 = param_1[0xc];
        param_1[0xc] = 0;
        goto LAB_032b8cb8;
      }
      if (*(int *)(**(int **)(_UNK_032b9228 + 0x32b88a0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032b922c + 0x32b88bc));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x0202998c(iVar2,0x751,0,0);
      iVar2 = param_1[5];
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = 0x5c;
      if (*(int *)(iVar2 + 0x1c) != 0x66) {
        iVar2 = param_1[5];
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar7 = 0x5d;
        if (*(int *)(iVar2 + 0x1c) != 0x67) {
          iVar2 = param_1[5];
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar7 = 0;
          if (*(int *)(iVar2 + 0x1c) == 0x65) {
            uVar7 = 0x5b;
          }
        }
      }
      if (*(int *)(**(int **)(_UNK_032b9230 + 0x32b8950) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032b9234 + 0x32b896c));
      piVar8 = *(int **)(_UNK_032b9238 + 0x32b8980);
      iVar9 = *piVar8;
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x014387a4();
        iVar9 = *piVar8;
      }
      uVar10 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x78);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar10 = func_0x02e83850(iVar2,uVar10,0);
      if (*(int *)(**(int **)(_UNK_032b923c + 0x32b89c8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032b9240 + 0x32b89e4));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02b77640(iVar2,uVar10,uVar7,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_032b4e74(iVar6,0);
      param_1[10] = iVar2;
      func_0x014385cc();
      iVar2 = param_1[5];
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar2 + 0xbc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar1 = FUN_032af344(iVar6,uVar7,0);
      iVar2 = param_1[5];
      *(undefined1 *)(param_1 + 0xb) = uVar1;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar12 = param_1[8];
      iVar11 = param_1[9];
      iVar4 = **(int **)(_UNK_032b9244 + 0x32b8a84);
      iVar9 = param_1[7];
      uVar7 = *(undefined4 *)(iVar2 + 0xbc);
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x014387a4(iVar4);
        iVar4 = **(int **)(_UNK_032b9248 + 0x32b8ac4);
      }
      iVar2 = *(int *)(*(int *)(iVar4 + 0x5c) + 8);
      if (iVar2 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x014387a4(iVar4);
          iVar4 = **(int **)(_UNK_032b924c + 0x32b8af4);
        }
        uVar3 = **(undefined4 **)(iVar4 + 0x5c);
        iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_032b9250 + 0x32b8b08));
        func_0x05096384(iVar2,uVar3,**(undefined4 **)(_UNK_032b9254 + 0x32b8b1c),0);
        piVar8 = (int *)(*(int *)(**(int **)(_UNK_032b9258 + 0x32b8b38) + 0x5c) + 8);
        *piVar8 = iVar2;
        func_0x014385cc(piVar8,iVar2);
      }
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      FUN_032afe8c(iVar6,uVar10,uVar7,iVar9,iVar12,iVar11,iVar2,0);
      if (*(int *)(**(int **)(_UNK_032b925c + 0x32b8b88) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x051f67e8(800,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iStack_28 = func_0x051ed6a0(iVar2,0);
      iVar2 = func_0x05055bbc(&iStack_28,0);
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[0xc] = iStack_28;
        func_0x014385cc(param_1 + 0xc,0);
        func_0x035b1bc0(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_032b9260 + 0x32b8d84))
        ;
        return;
      }
      goto LAB_032b8bd8;
    }
    *param_1 = -1;
    iStack_28 = param_1[0xc];
    param_1[0xc] = 0;
  }
  func_0x05055ca8(&iStack_28,0);
  if (*(int *)(**(int **)(_UNK_032b926c + 0x32b8c68) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x051f67e8(500,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iStack_28 = func_0x051ed6a0(iVar2,0);
  iVar2 = func_0x05055bbc(&iStack_28,0);
  if (iVar2 == 0) {
    *param_1 = 2;
    param_1[0xc] = iStack_28;
    func_0x014385cc(param_1 + 0xc,0);
    func_0x035b1bc0(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_032b9270 + 0x32b8d0c));
    return;
  }
LAB_032b8cb8:
  func_0x05055ca8(&iStack_28,0);
  if ((char)param_1[0xb] != '\0') {
    iVar2 = param_1[10];
    if (iVar2 == 0) {
      func_0x014388e4();
      uVar7 = uRam00000010;
      iVar2 = param_1[10];
      if (iVar2 == 0) {
        iVar2 = 0;
        func_0x014388e4();
      }
    }
    else {
      uVar7 = *(undefined4 *)(iVar2 + 0x10);
    }
    uVar10 = *(undefined4 *)(iVar2 + 0x14);
    if (*(int *)(**(int **)(_UNK_032b9274 + 0x32b8dc0) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar7 = func_0x02af43a8(uVar7,uVar10,0);
    if (*(int *)(**(int **)(_UNK_032b9278 + 0x32b8df4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x0202346c(0);
    iVar6 = param_1[10];
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    piVar8 = *(int **)(iVar6 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x014388e4();
    }
    uVar10 = (**(code **)(*piVar8 + 0xd8))(piVar8,*(undefined4 *)(*piVar8 + 0xdc));
    iVar6 = param_1[10];
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    piVar8 = *(int **)(iVar6 + 0x14);
    if (piVar8 == (int *)0x0) {
      func_0x014388e4();
    }
    uVar3 = (**(code **)(*piVar8 + 0xd8))(piVar8,*(undefined4 *)(*piVar8 + 0xdc));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x020257a4(iVar2,0x220,uVar10,uVar3,0,0,0);
    if (*(int *)(**(int **)(_UNK_032b927c + 0x32b8ed0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x03b2c734(**(undefined4 **)(_UNK_032b9280 + 0x32b8eec));
    if (*(int *)(**(int **)(_UNK_032b9284 + 0x32b8f00) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_032b9288 + 0x32b8f1c));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    piVar8 = *(int **)(_UNK_032b928c + 0x32b8f3c);
    uVar10 = *(undefined4 *)(iVar6 + 0x10);
    iVar6 = *piVar8;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4(iVar6);
      iVar6 = *piVar8;
    }
    iVar9 = *(int *)(*(int *)(iVar6 + 0x5c) + 0xc);
    if (iVar9 == 0) {
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x014387a4(iVar6);
        iVar6 = *piVar8;
      }
      uVar3 = **(undefined4 **)(iVar6 + 0x5c);
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_032b9290 + 0x32b8f94));
      func_0x05096384(iVar9,uVar3,**(undefined4 **)(_UNK_032b9294 + 0x32b8fa8),0);
      piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0xc);
      *piVar8 = iVar9;
      func_0x014385cc(piVar8,iVar9);
    }
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b75870(iVar2,uVar7,uVar10,0,0x69,0,0,0,0,0,0,0,iVar9,0,0);
  }
  *param_1 = -2;
  param_1[10] = 0;
  func_0x014385cc(param_1 + 10,0);
  func_0x0505659c(param_1 + 1,0);
  return;
}

