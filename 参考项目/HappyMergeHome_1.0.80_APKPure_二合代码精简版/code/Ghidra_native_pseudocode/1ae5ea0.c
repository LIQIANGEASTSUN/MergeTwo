
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01af5ea0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar10 = (char *)(_UNK_01af658c + 0x1af5ebc);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01af6590 + 0x1af5ed0));
    func_0x01438628(*(undefined4 *)(_UNK_01af6594 + 0x1af5edc));
    func_0x01438628(*(undefined4 *)(_UNK_01af6598 + 0x1af5ee8));
    func_0x01438628(*(undefined4 *)(_UNK_01af659c + 0x1af5ef4));
    func_0x01438628(*(undefined4 *)(_UNK_01af65a0 + 0x1af5f00));
    func_0x01438628(*(undefined4 *)(_UNK_01af65a4 + 0x1af5f0c));
    func_0x01438628(*(undefined4 *)(_UNK_01af65a8 + 0x1af5f18));
    func_0x01438628(*(undefined4 *)(_UNK_01af65ac + 0x1af5f24));
    func_0x01438628(*(undefined4 *)(_UNK_01af65b0 + 0x1af5f30));
    func_0x01438628(*(undefined4 *)(_UNK_01af65b4 + 0x1af5f3c));
    func_0x01438628(*(undefined4 *)(_UNK_01af65b8 + 0x1af5f48));
    func_0x01438628(*(undefined4 *)(_UNK_01af65bc + 0x1af5f54));
    func_0x01438628(*(undefined4 *)(_UNK_01af65c0 + 0x1af5f60));
    func_0x01438628(*(undefined4 *)(_UNK_01af65c4 + 0x1af5f6c));
    func_0x01438628(*(undefined4 *)(_UNK_01af65c8 + 0x1af5f78));
    func_0x01438628(*(undefined4 *)(_UNK_01af65cc + 0x1af5f84));
    func_0x01438628(*(undefined4 *)(_UNK_01af65d0 + 0x1af5f90));
    func_0x01438628(*(undefined4 *)(_UNK_01af65d4 + 0x1af5f9c));
    *pcVar10 = '\x01';
  }
  iVar5 = func_0x02953fd4(0x2d21,0);
  if (iVar5 == 0) {
    if ((param_2 != 0) && (iVar5 = FUN_01ae99ac(param_1), iVar5 != 0)) {
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_4c = *(undefined4 *)(param_2 + 8);
      puVar11 = (undefined4 *)((uint)&uStack_48 | 4);
      uStack_38 = 0;
      uStack_48 = 0x127;
      *puVar11 = 0;
      puVar11[1] = uStack_34;
      puVar11[2] = uStack_30;
      puVar11[3] = uStack_2c;
      uStack_44 = func_0x01524ffc(&uStack_4c,0);
      func_0x014385cc(puVar11,uStack_44);
      uVar12 = *(undefined4 *)(param_2 + 0xc);
      uVar18 = *(undefined4 *)(param_2 + 0x10);
      if (*(int *)(**(int **)(_UNK_01af65d8 + 0x1af6058) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x02af43a8(uVar12,uVar18,0);
      iVar13 = 0;
      while( true ) {
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar5 + 0xc) <= iVar13) break;
        iVar6 = func_0x0152983c(iVar5,iVar13,**(undefined4 **)(_UNK_01af65dc + 0x1af60d0));
        iVar14 = **(int **)(**(int **)(_UNK_01af65e0 + 0x1af60f0) + 0x5c);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar12 = *(undefined4 *)(iVar6 + 8);
        if (iVar14 == 0) {
          func_0x014388e4();
        }
        iVar14 = func_0x02e651cc(iVar14,uVar12,0);
        if ((iVar14 == 0) &&
           (iVar14 = FUN_01af2778(param_1,*(undefined4 *)(iVar6 + 8)), iVar14 != 0)) {
          if (0 < *(int *)(iVar6 + 0xc)) {
            iVar14 = 0;
            do {
              iVar7 = FUN_01ae99ac(param_1);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar7 = *(int *)(iVar7 + 0x14);
              uVar12 = *(undefined4 *)(iVar6 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x024f05ac(iVar7,uVar12,**(undefined4 **)(_UNK_01af65e4 + 0x1af6188));
              if (*(int *)(**(int **)(_UNK_01af65e8 + 0x1af619c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar7 = func_0x0202346c(0);
              iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_01af65ec + 0x1af61c4));
              func_0x02025440(iVar8,0);
              if (iVar8 == 0) {
                func_0x014388e4();
                uVar12 = *(undefined4 *)(iVar6 + 8);
                uRam00000008 = 0x78;
                func_0x014388e4();
              }
              else {
                uVar12 = *(undefined4 *)(iVar6 + 8);
                *(undefined4 *)(iVar8 + 8) = 0x78;
              }
              *(undefined1 *)(iVar8 + 0x25) = 1;
              *(undefined4 *)(iVar8 + 0xc) = uVar12;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x02024d08(iVar7,iVar8,1,0);
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)(iVar6 + 0xc));
          }
        }
        else {
          uVar17 = uStack_2c;
          uVar16 = uStack_30;
          uVar4 = uStack_34;
          uVar3 = uStack_38;
          uVar2 = uStack_3c;
          uVar1 = uStack_40;
          uVar18 = uStack_44;
          uVar12 = uStack_48;
          uVar19 = *(undefined4 *)(iVar6 + 8);
          uVar9 = *(undefined4 *)(iVar6 + 0xc);
          iVar6 = **(int **)(**(int **)(_UNK_01af65f0 + 0x1af6270) + 0x5c);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          func_0x02e64460(iVar6,uVar19,uVar9,uVar16,uVar12,uVar18,uVar1,uVar2,uVar3,uVar4,uVar16,
                          uVar17,1,0,0,0);
        }
        iVar13 = iVar13 + 1;
      }
      if (*(int *)(**(int **)(_UNK_01af65f4 + 0x1af6304) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar13 = func_0x014e9518(**(undefined4 **)(_UNK_01af65f8 + 0x1af6320));
      piVar15 = *(int **)(_UNK_01af65fc + 0x1af6334);
      iVar6 = *piVar15;
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x014387a4();
        iVar6 = *piVar15;
      }
      uVar12 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x1ac);
      piVar15 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01af6600 + 0x1af6358),1);
      if (piVar15 == (int *)0x0) {
        func_0x014388e4();
      }
      iVar6 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar15 + 0x20));
      if (iVar6 == 0) {
        uVar18 = func_0x01438904();
        func_0x01438790(uVar18,0);
      }
      if (piVar15[3] == 0) {
        func_0x014388e8();
      }
      piVar15[4] = iVar5;
      func_0x014385cc(piVar15 + 4,iVar5);
      if (iVar13 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar13,uVar12,piVar15,0);
      if (*(int *)(**(int **)(_UNK_01af6604 + 0x1af63e4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar13 = func_0x014e96a8(**(undefined4 **)(_UNK_01af6608 + 0x1af6400));
      if (*(int *)(**(int **)(_UNK_01af660c + 0x1af6414) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01af6610 + 0x1af6430));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar4 = uStack_2c;
      uVar3 = uStack_30;
      uVar2 = uStack_34;
      uVar1 = uStack_38;
      uVar18 = uStack_44;
      uVar12 = uStack_48;
      uVar16 = *(undefined4 *)(iVar6 + 0x10);
      piVar15 = *(int **)(_UNK_01af6614 + 0x1af6484);
      iVar6 = *piVar15;
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x014387a4();
        iVar6 = *piVar15;
      }
      iVar14 = *(int *)(*(int *)(iVar6 + 0x5c) + 0x10);
      if (iVar14 == 0) {
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar15;
        }
        uVar17 = **(undefined4 **)(iVar6 + 0x5c);
        iVar14 = func_0x014388d4(**(undefined4 **)(_UNK_01af6618 + 0x1af64d8));
        func_0x0152e3ec(iVar14,uVar17,**(undefined4 **)(_UNK_01af661c + 0x1af64f8),0);
        piVar15 = (int *)(*(int *)(*piVar15 + 0x5c) + 0x10);
        *piVar15 = iVar14;
        func_0x014385cc(piVar15,iVar14);
      }
      if (iVar13 == 0) {
        func_0x014388e4();
      }
      func_0x02b75870(iVar13,iVar5,uVar16,0,uVar12,uVar18,uStack_40,uStack_3c,uVar1,uVar2,uVar3,
                      uVar4,iVar14,0,0);
      func_0x01af7220(param_1,*(undefined4 *)(param_2 + 8));
    }
  }
  else {
    iVar5 = func_0x029540a4(0x2d21,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar5,param_1,param_2,0);
  }
  return;
}

