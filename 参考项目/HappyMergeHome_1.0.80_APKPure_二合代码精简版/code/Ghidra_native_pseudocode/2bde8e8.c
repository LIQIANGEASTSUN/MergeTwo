
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bee8e8(int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_02bef124 + 0x2bee908);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bef128 + 0x2bee920));
    func_0x01438628(*(undefined4 *)(_UNK_02bef12c + 0x2bee92c));
    func_0x01438628(*(undefined4 *)(_UNK_02bef130 + 0x2bee938));
    func_0x01438628(*(undefined4 *)(_UNK_02bef134 + 0x2bee944));
    func_0x01438628(*(undefined4 *)(_UNK_02bef138 + 0x2bee950));
    func_0x01438628(*(undefined4 *)(_UNK_02bef13c + 0x2bee95c));
    func_0x01438628(*(undefined4 *)(_UNK_02bef140 + 0x2bee968));
    func_0x01438628(*(undefined4 *)(_UNK_02bef144 + 0x2bee974));
    func_0x01438628(*(undefined4 *)(_UNK_02bef148 + 0x2bee980));
    func_0x01438628(*(undefined4 *)(_UNK_02bef14c + 0x2bee98c));
    func_0x01438628(*(undefined4 *)(_UNK_02bef150 + 0x2bee998));
    func_0x01438628(*(undefined4 *)(_UNK_02bef154 + 0x2bee9a4));
    func_0x01438628(*(undefined4 *)(_UNK_02bef158 + 0x2bee9b0));
    func_0x01438628(*(undefined4 *)(_UNK_02bef15c + 0x2bee9bc));
    func_0x01438628(*(undefined4 *)(_UNK_02bef160 + 0x2bee9c8));
    *pcVar7 = '\x01';
  }
  uStack_28 = 0;
  iVar2 = func_0x02953fd4(0xfd2,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0xfd2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028980fc(iVar2,param_1,param_2,param_3,param_4,param_5,0);
    return;
  }
  uVar3 = func_0x024ef5b8(0);
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  *(uint *)(param_1 + 0x9c) = param_2;
  if ((int)param_2 < 0) {
LAB_02beedf0:
    iVar2 = *(int *)(param_1 + 0x54);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b9f57c(iVar2,0);
    if (param_2 == 0xffffffff) goto LAB_02bef108;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x44);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 0xc) <= (int)param_2) goto LAB_02beedf0;
    iVar2 = *(int *)(param_1 + 0x44);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar2 + 0xc) <= param_2) {
      func_0x014388e8();
    }
    iVar2 = *(int *)(iVar2 + param_2 * 4 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02c3f4b4(iVar2,0);
    if (iVar2 == -1) goto LAB_02beedf0;
    iVar2 = *(int *)(param_1 + 0x54);
    if (iVar2 != 0) {
      FUN_02bed670(&uStack_38,param_1,param_2);
      uVar3 = uStack_34;
      uVar1 = uStack_38;
      if (*(int *)(**(int **)(_UNK_02bef164 + 0x2beead4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02bef168 + 0x2beeb08));
      iVar8 = *(int *)(param_1 + 0x44);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar8 + 0xc) <= param_2) {
        func_0x014388e8();
      }
      iVar8 = *(int *)(iVar8 + param_2 * 4 + 0x10);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      uVar5 = func_0x02c3f4b4(iVar8,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar5 = func_0x02c4b538(iVar4,uVar5,0);
      func_0x02b9f3fc(iVar2,uVar1,uVar3,uStack_30,uVar5,0);
    }
    piVar9 = *(int **)(_UNK_02bef16c + 0x2beeb9c);
    puVar6 = *(undefined4 **)(_UNK_02bef174 + 0x2beebb0);
    if (param_3 != 0) {
      puVar6 = *(undefined4 **)(_UNK_02bef170 + 0x2beeba8);
    }
    uVar3 = *puVar6;
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar6 = *(undefined4 **)(_UNK_02bef178 + 0x2beebd4);
    iVar2 = func_0x014e9518(*puVar6);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_02bd1400(iVar2,param_2,uVar5,0);
    if (iVar2 == 0) {
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(*puVar6);
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      FUN_02bd114c(iVar2,param_2,uVar5,0);
      iVar2 = *(int *)(param_1 + 0x44);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar2 + 0xc) <= param_2) {
        func_0x014388e8();
      }
      iVar2 = *(int *)(iVar2 + param_2 * 4 + 0x10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if ((param_4 & ~(uint)*(byte *)(iVar2 + 0x29)) != 0) {
        iVar2 = *(int *)(param_1 + 0x44);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar2 + 0xc) <= param_2) {
          func_0x014388e8();
        }
        iVar2 = *(int *)(iVar2 + param_2 * 4 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x02c230dc(iVar2,uVar3,1,0);
      }
    }
    if ((*(uint *)(param_1 + 0xa4) != param_2) && (param_3 == 0)) {
      if (*(int *)(**(int **)(_UNK_02bef17c + 0x2beed14) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bef180 + 0x2beed30));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x0202998c(iVar2,0x30,0,0);
      *(uint *)(param_1 + 0xa4) = param_2;
    }
    if (*(int *)(**(int **)(_UNK_02bef184 + 0x2beed68) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bef188 + 0x2beed84));
    iVar4 = *(int *)(param_1 + 0x44);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar4 + 0xc) <= param_2) {
      func_0x014388e8();
    }
    iVar4 = *(int *)(iVar4 + param_2 * 4 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x02c3f4b4(iVar4,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02c4ab68(iVar2,uVar3,0);
  }
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar2 + 0xc) <= param_2) {
    func_0x014388e8();
  }
  iVar2 = *(int *)(iVar2 + param_2 * 4 + 0x10);
  if (iVar2 == 0) {
    func_0x014388e4();
    iVar4 = func_0x02c3f4b4(0,0);
    func_0x014388e4();
    if (0 < iVar4) goto LAB_02beee58;
LAB_02beee88:
    uStack_28 = *(undefined4 *)(iVar2 + 0x10);
  }
  else {
    iVar4 = func_0x02c3f4b4(iVar2,0);
    if (iVar4 < 1) goto LAB_02beee88;
LAB_02beee58:
    uStack_28 = func_0x02c3f4b4(iVar2,0);
  }
  if (param_5 != 0) {
    piVar9 = *(int **)(_UNK_02bef18c + 0x2beeea4);
    iVar4 = **(int **)(*piVar9 + 0x5c);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x02b63a9c(iVar4,0x29,0,0);
    if (iVar4 == 0) {
      iVar4 = **(int **)(*piVar9 + 0x5c);
      uVar3 = func_0x01524ffc(&uStack_28,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x02b65c74(iVar4,0x29,uVar3,0,0);
    }
    iVar4 = **(int **)(*piVar9 + 0x5c);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x02b65c74(iVar4,100,0,0,0);
    iVar4 = **(int **)(*piVar9 + 0x5c);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x02b65c74(iVar4,0x66,0,0,0);
  }
  if (iVar2 != 0) {
    if (*(int *)(**(int **)(_UNK_02bef190 + 0x2beef90) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02bef194 + 0x2beefac));
    piVar9 = *(int **)(_UNK_02bef198 + 0x2beefc0);
    iVar8 = *piVar9;
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x014387a4();
      iVar8 = *piVar9;
    }
    uVar3 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x14);
    piVar9 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bef19c + 0x2beefe4),2);
    uStack_34 = func_0x02c3f4b4(iVar2,0);
    uStack_38 = param_2;
    iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bef1a0 + 0x2bef00c),&uStack_38);
    if (piVar9 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar2 != 0) && (iVar8 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar9 + 0x20)), iVar8 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if (piVar9[3] == 0) {
      func_0x014388e8();
    }
    piVar9[4] = iVar2;
    func_0x014385cc(piVar9 + 4,iVar2);
    uStack_3c = *(undefined4 *)(param_1 + 0x10);
    iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bef1a4 + 0x2bef08c),&uStack_3c);
    if ((iVar2 != 0) && (iVar8 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar9 + 0x20)), iVar8 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar9[3] < 2) {
      func_0x014388e8();
    }
    piVar9[5] = iVar2;
    func_0x014385cc(piVar9 + 5,iVar2);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x02990414(iVar4,uVar3,piVar9,0);
  }
LAB_02bef108:
  func_0x02bf1628(param_1,param_2,0x40200000);
  return;
}

