
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c1119c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01c11774 + 0x1c111bc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c11778 + 0x1c111d4));
    func_0x01438628(*(undefined4 *)(_UNK_01c1177c + 0x1c111e0));
    func_0x01438628(*(undefined4 *)(_UNK_01c11780 + 0x1c111ec));
    func_0x01438628(*(undefined4 *)(_UNK_01c11784 + 0x1c111f8));
    func_0x01438628(*(undefined4 *)(_UNK_01c11788 + 0x1c11204));
    func_0x01438628(*(undefined4 *)(_UNK_01c1178c + 0x1c11210));
    func_0x01438628(*(undefined4 *)(_UNK_01c11790 + 0x1c1121c));
    func_0x01438628(*(undefined4 *)(_UNK_01c11794 + 0x1c11228));
    func_0x01438628(*(undefined4 *)(_UNK_01c11798 + 0x1c11234));
    func_0x01438628(*(undefined4 *)(_UNK_01c1179c + 0x1c11240));
    func_0x01438628(*(undefined4 *)(_UNK_01c117a0 + 0x1c1124c));
    func_0x01438628(*(undefined4 *)(_UNK_01c117a4 + 0x1c11258));
    func_0x01438628(*(undefined4 *)(_UNK_01c117a8 + 0x1c11264));
    func_0x01438628(*(undefined4 *)(_UNK_01c117ac + 0x1c11270));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e25,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
    if ((iVar1 != 0) && (iVar1 = FUN_01c0deb0(param_1), iVar1 != 0)) {
      fVar2 = (float)func_0x024f1544(0x3f800000,param_5);
      iVar1 = (int)fVar2;
      if (fVar2 == _UNK_01c115cc) {
        iVar1 = -0x80000000;
      }
      iVar3 = FUN_01c0e5e0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026b354c(iVar3,*(int *)(iVar3 + 0x38) + iVar1,0);
      iVar1 = FUN_01c0e5e0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar10 = *(int **)(_UNK_01c117b0 + 0x1c11378);
      iVar1 = *(int *)(iVar1 + 0x38);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar11 = *(undefined4 **)(_UNK_01c117b4 + 0x1c11398);
      iVar3 = func_0x014e9518(*puVar11);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x020b151c(iVar3,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      puVar7 = *(undefined4 **)(_UNK_01c117b8 + 0x1c113dc);
      iVar3 = func_0x0152983c(iVar3,0,*puVar7);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x14) <= iVar1) {
        iVar1 = FUN_01c0e5e0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar1 + 0x38);
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x014e9518(*puVar11);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x020b151c(iVar4,0);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x0152983c(iVar4,0,*puVar7);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x026b354c(iVar1,iVar3 - *(int *)(iVar4 + 0x14),0);
        iVar1 = **(int **)(**(int **)(_UNK_01c117bc + 0x1c114a4) + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02e64460(iVar1,0x3a2,1);
        piVar10 = *(int **)(_UNK_01c117c0 + 0x1c11508);
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar11 = *(undefined4 **)(_UNK_01c117c4 + 0x1c11524);
        iVar1 = func_0x014e9518(*puVar11);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_01c117cc + 0x1c11550),
                                **(undefined4 **)(_UNK_01c117c8 + 0x1c11544));
        pcVar5 = (char *)(_UNK_01c117d0 + 0x1c11568);
        if (*pcVar5 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_01c117d4 + 0x1c1157c));
          *pcVar5 = '\x01';
        }
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x014e94d8(iVar1,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024efc2c(iVar3,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar10 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(*puVar11);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_01c117dc + 0x1c11614),
                                  **(undefined4 **)(_UNK_01c117d8 + 0x1c11608));
        }
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x024eecb8(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&uStack_2c,iVar1,0);
        pcVar5 = (char *)(_UNK_01c117e0 + 0x1c1166c);
        if (*pcVar5 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_01c117e4 + 0x1c11680));
          *pcVar5 = '\x01';
        }
        piVar10 = *(int **)(_UNK_01c117ec + 0x1c116a0);
        puVar11 = *(undefined4 **)(**(int **)(_UNK_01c117e8 + 0x1c11694) + 0x5c);
        iVar1 = *piVar10;
        uVar8 = *puVar11;
        uVar9 = puVar11[1];
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar10;
        }
        iVar3 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
        if (iVar3 == 0) {
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x014387a4();
            iVar1 = *piVar10;
          }
          uVar6 = **(undefined4 **)(iVar1 + 0x5c);
          iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01c117f0 + 0x1c116f0));
          func_0x0152e3ec(iVar3,uVar6,**(undefined4 **)(_UNK_01c117f4 + 0x1c11710),0);
          piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 4);
          *piVar10 = iVar3;
          func_0x014385cc(piVar10,iVar3);
        }
        if (*(int *)(**(int **)(_UNK_01c117f8 + 0x1c11738) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x01c117fc(uVar8,uVar9,uStack_2c,uStack_28,0x3f000000,1,iVar3);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5e25,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd544(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

