
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd2354(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02bd2a6c + 0x2bd2374);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd2a70 + 0x2bd2388));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2a74 + 0x2bd2394));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2a78 + 0x2bd23a0));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2a7c + 0x2bd23ac));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2a80 + 0x2bd23b8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2a84 + 0x2bd23c4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2a88 + 0x2bd23d0));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2a8c + 0x2bd23dc));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2a90 + 0x2bd23e8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2a94 + 0x2bd23f4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2a98 + 0x2bd2400));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2a9c + 0x2bd240c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2aa0 + 0x2bd2418));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2aa4 + 0x2bd2424));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x748,0);
  if (iVar1 == 0) {
    if (((param_2 != 0) && (-1 < *(int *)(param_2 + 8))) && (*(int *)(param_2 + 0xc) == 1)) {
      iVar1 = FUN_02baef1c(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      uVar8 = *(undefined4 *)(param_2 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar10 = *(undefined4 **)(_UNK_02bd2aa8 + 0x2bd24dc);
      iVar1 = func_0x046c26fc(iVar1,uVar8,*puVar10);
      if (iVar1 == 0) {
        if (*(int *)(param_2 + 8) == 0x186a4) {
          iVar1 = FUN_02baef1c(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x14);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x046c26fc(iVar1,0x18708,*puVar10);
          if (iVar1 == 0) {
            iVar1 = FUN_02baef1c(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x14);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x03b70cd0(iVar1,0x18708,0x18708,**(undefined4 **)(_UNK_02bd2aac + 0x2bd257c));
          }
        }
        if (*(int *)(**(int **)(_UNK_02bd2ab0 + 0x2bd2590) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd2ab4 + 0x2bd25ac));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x0205012c(iVar1,0);
        if (*(int *)(**(int **)(_UNK_02bd2ab8 + 0x2bd25dc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bd2abc + 0x2bd25f8));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x029ca78c(iVar2,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if ((iVar2 < *(int *)(iVar1 + 0xc)) &&
           (iVar1 = func_0x02d86a60(*(undefined4 *)(param_2 + 8),0), iVar1 != 0)) {
          iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02bd2ac0 + 0x2bd2658));
          func_0x024eed9c(iVar2,**(undefined4 **)(_UNK_02bd2ac4 + 0x2bd266c));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar2 + 8);
          uVar9 = *(uint *)(iVar2 + 0xc);
          piVar5 = *(int **)(_UNK_02bd2ac8 + 0x2bd26a0);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
          iVar11 = *piVar5;
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          if (uVar9 < *(uint *)(iVar7 + 0xc)) {
            *(uint *)(iVar2 + 0xc) = uVar9 + 1;
            piVar5 = (int *)(iVar7 + uVar9 * 4 + 0x10);
            *piVar5 = iVar1;
            func_0x014385cc(piVar5,iVar1);
          }
          else {
            func_0x0152874c(iVar2,iVar1,
                            *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
          }
          if (*(int *)(**(int **)(_UNK_02bd2acc + 0x2bd26f8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd2ad0 + 0x2bd2714));
          piVar5 = *(int **)(_UNK_02bd2ad4 + 0x2bd2728);
          iVar7 = *piVar5;
          if (*(int *)(iVar7 + 0x74) == 0) {
            func_0x014387a4();
            iVar7 = *piVar5;
          }
          uVar8 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x390);
          piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bd2ad8 + 0x2bd274c),1);
          if (piVar5 == (int *)0x0) {
            func_0x014388e4();
          }
          iVar7 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar5 + 0x20));
          if (iVar7 == 0) {
            uVar3 = func_0x01438904();
            func_0x01438790(uVar3,0);
          }
          if (piVar5[3] == 0) {
            func_0x014388e8();
          }
          piVar5[4] = iVar2;
          func_0x014385cc(piVar5 + 4,iVar2);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x029901b4(iVar1,uVar8,piVar5,0);
        }
        iVar1 = FUN_02baef1c(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x14);
        uVar8 = *(undefined4 *)(param_2 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03b70cd0(iVar1,uVar8,uVar8,**(undefined4 **)(_UNK_02bd2adc + 0x2bd280c));
        if (*(int *)(**(int **)(_UNK_02bd2ae0 + 0x2bd2820) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd2ae4 + 0x2bd283c));
        piVar5 = *(int **)(_UNK_02bd2ae8 + 0x2bd2850);
        iVar2 = *piVar5;
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x014387a4();
          iVar2 = *piVar5;
        }
        uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x244);
        piVar4 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bd2aec + 0x2bd2874),2);
        puVar10 = *(undefined4 **)(_UNK_02bd2af0 + 0x2bd2894);
        uStack_28 = param_3;
        iVar2 = func_0x014387ac(*puVar10,&uStack_28);
        if (piVar4 == (int *)0x0) {
          func_0x014388e4();
        }
        if ((iVar2 != 0) &&
           (iVar7 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar7 == 0)) {
          uVar3 = func_0x01438904();
          func_0x01438790(uVar3,0);
        }
        if (piVar4[3] == 0) {
          func_0x014388e8();
        }
        piVar4[4] = iVar2;
        func_0x014385cc(piVar4 + 4,iVar2);
        iVar2 = func_0x014387a8(param_2,*(undefined4 *)(*piVar4 + 0x20));
        if (iVar2 == 0) {
          uVar3 = func_0x01438904();
          func_0x01438790(uVar3,0);
        }
        if ((uint)piVar4[3] < 2) {
          func_0x014388e8();
        }
        piVar4[5] = param_2;
        func_0x014385cc(piVar4 + 5,param_2);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar1,uVar8,piVar4,0);
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd2af4 + 0x2bd2968));
        uVar8 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x248);
        piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bd2af8 + 0x2bd2984),2);
        uStack_2c = param_3;
        iVar2 = func_0x014387ac(*puVar10,&uStack_2c);
        if (piVar5 == (int *)0x0) {
          func_0x014388e4();
        }
        if ((iVar2 != 0) &&
           (iVar7 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar7 == 0)) {
          uVar3 = func_0x01438904();
          func_0x01438790(uVar3,0);
        }
        if (piVar5[3] == 0) {
          func_0x014388e8();
        }
        piVar5[4] = iVar2;
        func_0x014385cc(piVar5 + 4,iVar2);
        iVar2 = func_0x014387a8(param_2,*(undefined4 *)(*piVar5 + 0x20));
        if (iVar2 == 0) {
          uVar3 = func_0x01438904();
          func_0x01438790(uVar3,0);
        }
        if ((uint)piVar5[3] < 2) {
          func_0x014388e8();
        }
        piVar5[5] = param_2;
        func_0x014385cc(piVar5 + 5,param_2);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar1,uVar8,piVar5,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x748,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028834e8(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

