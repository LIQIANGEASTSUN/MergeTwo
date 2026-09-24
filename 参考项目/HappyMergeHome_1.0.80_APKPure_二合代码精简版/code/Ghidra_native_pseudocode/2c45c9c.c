
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c55c9c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  bool bVar16;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  pcVar5 = (char *)(_UNK_02c566b8 + 0x2c55cb4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c566bc + 0x2c55cc8));
    func_0x01438628(*(undefined4 *)(_UNK_02c566c0 + 0x2c55cd4));
    func_0x01438628(*(undefined4 *)(_UNK_02c566c4 + 0x2c55ce0));
    func_0x01438628(*(undefined4 *)(_UNK_02c566c8 + 0x2c55cec));
    func_0x01438628(*(undefined4 *)(_UNK_02c566cc + 0x2c55cf8));
    func_0x01438628(*(undefined4 *)(_UNK_02c566d0 + 0x2c55d04));
    func_0x01438628(*(undefined4 *)(_UNK_02c566d4 + 0x2c55d10));
    func_0x01438628(*(undefined4 *)(_UNK_02c566d8 + 0x2c55d1c));
    func_0x01438628(*(undefined4 *)(_UNK_02c566dc + 0x2c55d28));
    func_0x01438628(*(undefined4 *)(_UNK_02c566e0 + 0x2c55d34));
    func_0x01438628(*(undefined4 *)(_UNK_02c566e4 + 0x2c55d40));
    func_0x01438628(*(undefined4 *)(_UNK_02c566e8 + 0x2c55d4c));
    func_0x01438628(*(undefined4 *)(_UNK_02c566ec + 0x2c55d58));
    func_0x01438628(*(undefined4 *)(_UNK_02c566f0 + 0x2c55d64));
    func_0x01438628(*(undefined4 *)(_UNK_02c566f4 + 0x2c55d70));
    func_0x01438628(*(undefined4 *)(_UNK_02c566f8 + 0x2c55d7c));
    func_0x01438628(*(undefined4 *)(_UNK_02c566fc + 0x2c55d88));
    func_0x01438628(*(undefined4 *)(_UNK_02c56700 + 0x2c55d94));
    func_0x01438628(*(undefined4 *)(_UNK_02c56704 + 0x2c55da0));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar2 = func_0x02953fd4(0x5f32,0);
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02c56708 + 0x2c55e00));
    func_0x02c59320(iVar2,0);
    if (0 < *(int *)(param_1 + 0xcc)) {
      piVar14 = *(int **)(_UNK_02c5670c + 0x2c55e28);
      if (*(int *)(*piVar14 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar7 = *(undefined4 **)(_UNK_02c56710 + 0x2c55e44);
      iVar3 = func_0x014e9518(*puVar7);
      iVar4 = FUN_02c3d868(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar4 + 0xb0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar6 = FUN_02bdd790(iVar3,uVar6,0,0,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      piVar15 = *(int **)(_UNK_02c56714 + 0x2c55eac);
      iVar3 = *(int *)(*piVar15 + 0x74);
      *(undefined4 *)(iVar2 + 8) = uVar6;
      if (iVar3 == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c56718 + 0x2c55ecc));
      iVar4 = func_0x014e9518(*puVar7);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = FUN_02bad050(iVar4,0,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      puVar11 = *(undefined4 **)(_UNK_02c5671c + 0x2c55f30);
      iVar4 = func_0x03b780b0(iVar4,0,*puVar11);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar4 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x02eb1994(iVar3,uVar6,0);
      bVar16 = iVar3 == 0;
      if (bVar16) {
        iVar3 = *(int *)(iVar2 + 8);
      }
      if (bVar16 && iVar3 == -1) {
        if (*(int *)(**(int **)(_UNK_02c56720 + 0x2c560e8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c56724 + 0x2c56104));
        iVar3 = *(int *)(param_1 + 0x40);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024eecb8(iVar3,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&uStack_34,iVar3,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        FUN_02c39590(iVar2,uStack_34,uStack_30,uStack_2c,0x3fc00000);
      }
      else {
        if (*(int *)(*piVar14 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(*puVar7);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02bad050(iVar3,0,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x1c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b780b0(iVar3,0,*puVar11);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar3 + 8) == 0x3e9) {
          iVar3 = **(int **)(**(int **)(_UNK_02c56728 + 0x2c5600c) + 0x5c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x02b637f8(iVar3,0x119,0);
          if (iVar3 == 0) {
            iVar3 = **(int **)(**(int **)(_UNK_02c5672c + 0x2c56044) + 0x5c);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = FUN_02c3d868(iVar3);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar12 = 0;
            iVar3 = FUN_02be9134(iVar3,0);
            while( true ) {
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar12) break;
              if (*(uint *)(iVar3 + 0xc) <= uVar12) {
                func_0x014388e8();
              }
              iVar4 = *(int *)(iVar3 + 0x10 + uVar12 * 4);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = FUN_02c3f4b4(iVar4);
              if (iVar4 == 0x186a4) {
                return;
              }
              uVar12 = uVar12 + 1;
            }
            puVar7 = *(undefined4 **)(_UNK_02c56730 + 0x2c5618c);
            piVar15 = *(int **)(_UNK_02c56734 + 0x2c56194);
            uStack_28 = uVar12;
          }
        }
        iVar3 = *(int *)(*piVar14 + 0x74);
        *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + -1;
        if (iVar3 == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(*puVar7);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        piVar13 = (int *)(iVar2 + 0xc);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        FUN_02be0e98(iVar3,0,piVar13,0,0,0);
        uVar6 = *(undefined4 *)(param_1 + 0x98);
        if (*(int *)(**(int **)(_UNK_02c56738 + 0x2c56208) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x024ef144(uVar6,0,0);
        if (iVar3 != 0) {
          iVar3 = *(int *)(param_1 + 0x98);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x02c6e9b0(iVar3,0);
        }
        iVar3 = *(int *)(param_1 + 0xa4);
        if (*(int *)(*piVar14 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x014e9518(*puVar7);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uStack_28 = FUN_02be0a54(iVar4,0,0);
        uVar6 = func_0x01524ffc(&uStack_28,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02032130(iVar3,uVar6,1,0);
        FUN_02c53c40(param_1,1);
        if (*(int *)(**(int **)(_UNK_02c5673c + 0x2c562dc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c56740 + 0x2c562f8));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x0202998c(iVar3,0xd,0,0);
        if (*(int *)(**(int **)(_UNK_02c56744 + 0x2c5632c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_02c56748 + 0x2c56348));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar6 = FUN_02c3a970(iVar3);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        *(undefined4 *)(iVar2 + 0x10) = uVar6;
        func_0x014385cc((undefined4 *)(iVar2 + 0x10),uVar6);
        if (*(int *)(*piVar15 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c5674c + 0x2c563a8));
        iVar4 = *piVar13;
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar10 = *(undefined4 *)(iVar4 + 8);
        FUN_02c3e3f8(&uStack_34,param_1);
        uVar1 = uStack_2c;
        uVar8 = uStack_30;
        uVar6 = uStack_34;
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02eb1af4(iVar3,uVar10,uVar6,uVar8,uVar1,0);
        if (iVar3 == 0) {
          if (*(int *)(**(int **)(_UNK_02c56750 + 0x2c56420) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x014e9518(*puVar7);
          iVar4 = *(int *)(iVar2 + 0xc);
          uVar6 = *(undefined4 *)(iVar2 + 8);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar8 = *(undefined4 *)(iVar4 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          FUN_02bd2cf0(iVar3,uVar6,uVar8,1,5,0,0xffffffff,0,0xffffffff,0,0);
          if (*(int *)(**(int **)(_UNK_02c56754 + 0x2c564a4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c56758 + 0x2c564c0));
          iVar4 = *piVar13;
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar10 = *(undefined4 *)(iVar4 + 8);
          FUN_02c3e3f8(&uStack_34,param_1);
          uVar1 = uStack_2c;
          uVar8 = uStack_30;
          uVar6 = uStack_34;
          iVar4 = **(int **)(**(int **)(_UNK_02c5675c + 0x2c564f8) + 0x5c);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = FUN_02c3d868(iVar4);
          uVar9 = *(undefined4 *)(iVar2 + 8);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          FUN_02bed744(&uStack_34,iVar4,uVar9,0);
          uVar9 = func_0x014388d4(**(undefined4 **)(_UNK_02c56760 + 0x2c5656c));
          func_0x0152e3ec(uVar9,iVar2,**(undefined4 **)(_UNK_02c56764 + 0x2c56588),0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x02b7f0c0(iVar3,uVar10,uVar6,uVar8,uVar1,uStack_34,uStack_30,uStack_2c,0x40a00000,
                          uVar9,0);
        }
        FUN_02c55630(param_1);
        iVar2 = *piVar13;
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x02c56774(param_1,*(undefined4 *)(iVar2 + 8));
        iVar3 = *piVar13;
        iVar2 = **(int **)(**(int **)(_UNK_02c56768 + 0x2c56608) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uStack_28 = *(uint *)(iVar3 + 8);
        uVar6 = func_0x01524ffc(&uStack_28,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x02b65c74(iVar2,0x28,uVar6,0,0);
        if (*(int *)(**(int **)(_UNK_02c5676c + 0x2c5666c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x03b2c734(**(undefined4 **)(_UNK_02c56770 + 0x2c56688));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        FUN_02c3e4a4(iVar2,3,0,0);
      }
    }
  }
  else {
    iVar2 = func_0x029540a4(0x5f32,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar2,param_1,0);
  }
  return;
}

