
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c726a0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  undefined4 uVar19;
  uint in_fpscr;
  float fVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined4 uStack_68;
  undefined4 uStack_60;
  int aiStack_5c [3];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar10 = (char *)(_UNK_02c7320c + 0x2c726c8);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c73210 + 0x2c726dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c73214 + 0x2c726e8));
    func_0x01438628(*(undefined4 *)(_UNK_02c73218 + 0x2c726f4));
    func_0x01438628(*(undefined4 *)(_UNK_02c7321c + 0x2c72700));
    func_0x01438628(*(undefined4 *)(_UNK_02c73220 + 0x2c7270c));
    func_0x01438628(*(undefined4 *)(_UNK_02c73224 + 0x2c72718));
    func_0x01438628(*(undefined4 *)(_UNK_02c73228 + 0x2c72724));
    func_0x01438628(*(undefined4 *)(_UNK_02c7322c + 0x2c72730));
    func_0x01438628(*(undefined4 *)(_UNK_02c73230 + 0x2c7273c));
    func_0x01438628(*(undefined4 *)(_UNK_02c73740 + 0x2c72748));
    func_0x01438628(*(undefined4 *)(_UNK_02c73744 + 0x2c72754));
    func_0x01438628(*(undefined4 *)(_UNK_02c73748 + 0x2c72760));
    func_0x01438628(*(undefined4 *)(_UNK_02c7374c + 0x2c7276c));
    func_0x01438628(*(undefined4 *)(_UNK_02c73750 + 0x2c72778));
    func_0x01438628(*(undefined4 *)(_UNK_02c73754 + 0x2c72784));
    func_0x01438628(*(undefined4 *)(_UNK_02c73758 + 0x2c72790));
    func_0x01438628(*(undefined4 *)(_UNK_02c7375c + 0x2c7279c));
    func_0x01438628(*(undefined4 *)(_UNK_02c73760 + 0x2c727a8));
    func_0x01438628(*(undefined4 *)(_UNK_02c73764 + 0x2c727b4));
    func_0x01438628(*(undefined4 *)(_UNK_02c73768 + 0x2c727c0));
    func_0x01438628(*(undefined4 *)(_UNK_02c7376c + 0x2c727cc));
    func_0x01438628(*(undefined4 *)(_UNK_02c73770 + 0x2c727d8));
    func_0x01438628(*(undefined4 *)(_UNK_02c73774 + 0x2c727e4));
    func_0x01438628(*(undefined4 *)(_UNK_02c73778 + 0x2c727f0));
    func_0x01438628(*(undefined4 *)(_UNK_02c7377c + 0x2c727fc));
    func_0x01438628(*(undefined4 *)(_UNK_02c73780 + 0x2c72808));
    func_0x01438628(*(undefined4 *)(_UNK_02c73784 + 0x2c72814));
    func_0x01438628(*(undefined4 *)(_UNK_02c73788 + 0x2c72820));
    func_0x01438628(*(undefined4 *)(_UNK_02c7378c + 0x2c7282c));
    func_0x01438628(*(undefined4 *)(_UNK_02c73790 + 0x2c72838));
    func_0x01438628(*(undefined4 *)(_UNK_02c73794 + 0x2c72844));
    func_0x01438628(*(undefined4 *)(_UNK_02c73798 + 0x2c72850));
    func_0x01438628(*(undefined4 *)(_UNK_02c7379c + 0x2c7285c));
    func_0x01438628(*(undefined4 *)(_UNK_02c737a0 + 0x2c72868));
    func_0x01438628(*(undefined4 *)(_UNK_02c737a4 + 0x2c72874));
    func_0x01438628(*(undefined4 *)(_UNK_02c737a8 + 0x2c72880));
    func_0x01438628(*(undefined4 *)(_UNK_02c737ac + 0x2c7288c));
    func_0x01438628(*(undefined4 *)(_UNK_02c737b0 + 0x2c72898));
    func_0x01438628(*(undefined4 *)(_UNK_02c737b4 + 0x2c728a4));
    func_0x01438628(*(undefined4 *)(_UNK_02c737b8 + 0x2c728b0));
    func_0x01438628(*(undefined4 *)(_UNK_02c737bc + 0x2c728bc));
    func_0x01438628(*(undefined4 *)(_UNK_02c737c0 + 0x2c728c8));
    *pcVar10 = '\x01';
  }
  aiStack_5c[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  aiStack_5c[1] = 0;
  uStack_48 = 0;
  aiStack_5c[0] = 0;
  uStack_60 = 0;
  uStack_44 = aiStack_5c[2];
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  iVar2 = func_0x02953fd4(0x6004,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x6004,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x0286c1e8(iVar2,param_1,param_2,0);
    return;
  }
  piVar18 = *(int **)(_UNK_02c737c4 + 0x2c72944);
  iVar2 = **(int **)(*piVar18 + 0x5c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x02b65c74(iVar2,0x47,0,0,0);
  iVar2 = **(int **)(*piVar18 + 0x5c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x02b65c74(iVar2,0x65,0,0,0);
  if (*(int *)(**(int **)(_UNK_02c73950 + 0x2c729b0) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c73954 + 0x2c729cc);
  iVar2 = func_0x014e9518(*puVar12);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  FUN_02ba3b0c(iVar2,0);
  iVar2 = func_0x014e9518(*puVar12);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  FUN_02ba16e0(iVar2,0);
  puVar12 = *(undefined4 **)(_UNK_02c7395c + 0x2c72a28);
  uStack_68 = *puVar12;
  if (*(int *)(**(int **)(_UNK_02c73958 + 0x2c72a1c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c73960 + 0x2c72a48));
  uVar13 = *(undefined4 *)(param_1 + 0x78);
  uVar3 = FUN_02c6b6f0(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = FUN_02bad204(iVar2,uVar13,uVar3,0);
  if (*(int *)(**(int **)(_UNK_02c73a88 + 0x2c72a90) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c73a8c + 0x2c72aac));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(undefined4 *)(iVar2 + 8);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x029a6fa8(iVar4,uVar3,0);
  if (iVar4 == 0) {
    func_0x010af2ec(iVar2);
    aiStack_5c[0] = *(int *)(iVar2 + 8);
    uVar3 = func_0x01524ffc(aiStack_5c,0);
    uVar13 = func_0x01438638(*(undefined4 *)(_UNK_02c7489c + 0x2c747a0));
    uVar3 = func_0x014e9568(uVar13,uVar3,0);
    func_0x01438638(*(undefined4 *)(_UNK_02c748a0 + 0x2c747bc));
    uVar13 = func_0x014388d4();
    func_0x014e95c8(uVar13,uVar3,0);
    uVar3 = func_0x01438638(*(undefined4 *)(_UNK_02c748a4 + 0x2c747dc));
    func_0x01438790(uVar13,uVar3);
    func_0x014385d0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  aiStack_5c[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  aiStack_5c[1] = 0;
  uStack_48 = 0;
  uStack_44 = aiStack_5c[2];
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  if (param_2 != 0) {
    aiStack_5c[0] = *(int *)(iVar2 + 0x6c);
    FUN_026f7770(iVar2,aiStack_5c[0] + 1,0);
  }
  puVar6 = &uStack_50;
  switch(*(undefined4 *)(iVar2 + 0xc)) {
  case 0:
    iVar16 = **(int **)(**(int **)(&UNK_02c72b5c + _UNK_02c73b20) + 0x5c);
    iVar17 = *(int *)(iVar4 + 0xd0);
    uStack_68 = **(undefined4 **)(&UNK_02c72b6c + _UNK_02c73b24);
    if (iVar16 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x02e61e0c(iVar16,0x65,iVar17,0);
    if (iVar4 != 0) {
      if (*(int *)(**(int **)(&UNK_02c72bac + _UNK_02c73b28) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(&UNK_02c72bc8 + _UNK_02c73b2c));
      uVar3 = *(undefined4 *)(iVar2 + 8);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = FUN_02c4b828(iVar4,uVar3,0);
      if (*(int *)(**(int **)(&UNK_02c72c04 + _UNK_02c73b30) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar16 = func_0x014e9518(**(undefined4 **)(&UNK_02c72c20 + _UNK_02c73b34));
      uVar13 = *(undefined4 *)(param_1 + 0x78);
      uVar15 = *(undefined4 *)(iVar2 + 8);
      uVar3 = FUN_02c6b6f0(param_1);
      if (iVar16 == 0) {
        func_0x014388e4();
      }
      if (iVar4 < 1) {
        FUN_02bd3648(iVar16,uVar13,uVar15,1,0xf,uVar3,0);
      }
      else {
        FUN_02bd2cf0(iVar16,uVar13,uVar15,1,0xf,uVar3,0xffffffff,1,0xffffffff,0,0);
      }
      piVar18 = *(int **)(&UNK_02c73b68 + _UNK_02c747f4);
      iVar2 = **(int **)(*piVar18 + 0x5c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_02c3d868(iVar2,0);
      uVar3 = *(undefined4 *)(param_1 + 0x78);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      FUN_02bf6cf8(iVar2,uVar3,0);
      iVar2 = **(int **)(*piVar18 + 0x5c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_02c3d868(iVar2,0);
      uVar3 = *(undefined4 *)(param_1 + 0x78);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_02beba7c(iVar2,uVar3,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      FUN_02c230dc(iVar2,**(undefined4 **)(&UNK_02c73c30 + _UNK_02c747f8),1,0);
    }
    aiStack_5c[1] = 0xc;
    goto LAB_02c745a0;
  case 1:
    if (param_2 == 0) {
      iVar17 = *(int *)(param_1 + 0xcc);
      if (*(int *)(iVar4 + 0x1c) == 2) {
        if (*(int *)(**(int **)(&UNK_02c73980 + _UNK_02c74828) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar16 = func_0x0202346c(0);
        if (iVar16 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar16,0x1f,0,0,0,0,0);
      }
      if (*(int *)(**(int **)(&UNK_02c739ec + _UNK_02c7482c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar16 = func_0x0202346c(0);
      if (iVar16 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar16,0x1b,0,0,0,0,0);
      iVar16 = *(int *)(param_1 + 0xd4);
      if (iVar16 == 0) {
        uStack_68 = **(undefined4 **)(&UNK_02c74014 + _UNK_02c748a8);
      }
      else if (iVar16 == 2 || iVar16 == 1) {
        uStack_68 = *puVar12;
      }
      uVar3 = *(undefined4 *)(param_1 + 0xcc);
      iVar16 = **(int **)(**(int **)(&UNK_02c74024 + _UNK_02c74830) + 0x5c);
      if (iVar16 == 0) {
        func_0x014388e4();
      }
      iVar16 = func_0x02e61e0c(iVar16,0x65,uVar3,0);
      if (iVar16 != 0) {
        iVar16 = *(int *)(param_1 + 0xd4);
        if (iVar16 == 0) {
          puVar12 = *(undefined4 **)(&UNK_02c7421c + _UNK_02c74838);
          if (*(int *)(**(int **)(&UNK_02c7406c + _UNK_02c74834) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(*puVar12);
          uVar3 = FUN_02c6b82c(param_1);
          uVar13 = FUN_02c6b6f0(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          FUN_02bd9790(iVar2,uVar3,uVar13,0);
          iVar2 = **(int **)(**(int **)(&UNK_02c74270 + _UNK_02c7483c) + 0x5c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = FUN_02c3d868(iVar2,0);
          uVar3 = *(undefined4 *)(param_1 + 0x78);
          piVar18 = *(int **)(&UNK_02c742a8 + _UNK_02c74840);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = FUN_02beba7c(iVar2,uVar3,0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          uVar3 = func_0x014388d4(**(undefined4 **)(&UNK_02c742d8 + _UNK_02c74844));
          func_0x0152e3ec(uVar3,param_1,**(undefined4 **)(&UNK_02c742f8 + _UNK_02c74848),0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          FUN_02c2865c(iVar2,0,uVar3,0);
        }
        else {
          puVar12 = *(undefined4 **)(&UNK_02c74084 + _UNK_02c7484c);
          if (*(int *)(**(int **)(&UNK_02c7406c + _UNK_02c74834) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x014e9518(*puVar12);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (iVar16 == 2) {
            FUN_02be240c(iVar5,iVar2,0,0);
            iVar2 = func_0x014e9518(*puVar12);
            uVar3 = FUN_02c6b82c(param_1);
            uVar13 = FUN_02c6b6f0(param_1);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            FUN_02bd98a4(iVar2,uVar3,uVar13,0);
            iVar2 = **(int **)(**(int **)(&UNK_02c7410c + _UNK_02c74850) + 0x5c);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = FUN_02c3d868(iVar2,0);
            uVar3 = *(undefined4 *)(param_1 + 0x78);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = FUN_02beba7c(iVar2,uVar3,0);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            piVar18 = *(int **)(&UNK_02c7416c + _UNK_02c74854);
            iVar16 = *(int *)(iVar2 + 0xc);
            iVar2 = *piVar18;
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x014387a4();
              iVar2 = *piVar18;
            }
            iVar5 = *(int *)(*(int *)(iVar2 + 0x5c) + 8);
            if (iVar5 == 0) {
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x014387a4();
                iVar2 = *piVar18;
              }
              uVar3 = **(undefined4 **)(iVar2 + 0x5c);
              iVar5 = func_0x014388d4(**(undefined4 **)(&UNK_02c741b8 + _UNK_02c74858));
              func_0x0152e3ec(iVar5,uVar3,**(undefined4 **)(&UNK_02c741d8 + _UNK_02c7485c),0);
              piVar18 = (int *)(*(int *)(*piVar18 + 0x5c) + 8);
              *piVar18 = iVar5;
code_r0x02c744c4:
              func_0x014385cc(piVar18,iVar5);
            }
          }
          else {
            FUN_02be21bc(iVar5,iVar2,0,0);
            iVar16 = func_0x014e9518(*puVar12);
            uVar3 = FUN_02c6b82c(param_1);
            uVar13 = FUN_02c6b6f0(param_1);
            if (iVar16 == 0) {
              func_0x014388e4();
            }
            FUN_02bd9554(iVar16,uVar3,uVar13,0);
            iVar16 = func_0x014e9518(**(undefined4 **)(&UNK_02c743b4 + _UNK_02c74860));
            if (iVar16 == 0) {
              func_0x014388e4();
            }
            FUN_02bd93c8(iVar16,iVar2,0);
            iVar2 = **(int **)(**(int **)(&UNK_02c743e4 + _UNK_02c74864) + 0x5c);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = FUN_02c3d868(iVar2,0);
            uVar3 = *(undefined4 *)(param_1 + 0x78);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = FUN_02beba7c(iVar2,uVar3,0);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            piVar18 = *(int **)(&UNK_02c74444 + _UNK_02c74868);
            iVar16 = *(int *)(iVar2 + 0xc);
            iVar2 = *piVar18;
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x014387a4();
              iVar2 = *piVar18;
            }
            iVar5 = *(int *)(*(int *)(iVar2 + 0x5c) + 0xc);
            if (iVar5 == 0) {
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x014387a4();
                iVar2 = *piVar18;
              }
              uVar3 = **(undefined4 **)(iVar2 + 0x5c);
              iVar5 = func_0x014388d4(**(undefined4 **)(&UNK_02c74490 + _UNK_02c7486c));
              func_0x0152e3ec(iVar5,uVar3,**(undefined4 **)(&UNK_02c744b0 + _UNK_02c74870),0);
              piVar18 = (int *)(*(int *)(*piVar18 + 0x5c) + 0xc);
              *piVar18 = iVar5;
              goto code_r0x02c744c4;
            }
          }
          if (iVar16 == 0) {
            func_0x014388e4();
          }
          FUN_02c2865c(iVar16,0,iVar5,0);
          piVar18 = *(int **)(&UNK_02c744f8 + _UNK_02c74874);
        }
        func_0x02c74ba0(param_1);
        if (*(int *)(*piVar18 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x0202346c(0);
        uVar3 = func_0x01524ffc(iVar4 + 8,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar2,0x2c,uVar3,0,0,0,0);
      }
    }
    else {
      if (*(int *)(iVar4 + 0x1c) == 2) {
        if (*(int *)(**(int **)(&UNK_02c72cb0 + _UNK_02c73c48) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar17 = func_0x0202346c(0);
        if (iVar17 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar17,0x20,0,0,0,0,0);
      }
      if (*(int *)(**(int **)(&UNK_02c72d1c + _UNK_02c73c4c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar17 = func_0x0202346c(0);
      if (iVar17 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar17,0x1c,0,0,0,0,0);
      if (*(int *)(**(int **)(&UNK_02c72d88 + _UNK_02c73c50) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar17 = func_0x03b2c734(**(undefined4 **)(&UNK_02c72da4 + _UNK_02c73c54));
      if (*(int *)(**(int **)(&UNK_02c72db8 + _UNK_02c73c58) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar16 = func_0x014e9518(**(undefined4 **)(&UNK_02c72dd8 + _UNK_02c73c5c));
      if (iVar16 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x02ca9ce8(iVar16,0);
      piVar18 = *(int **)(&UNK_02c72e08 + _UNK_02c73c60);
      iVar16 = *piVar18;
      if (*(int *)(iVar16 + 0x74) == 0) {
        func_0x014387a4();
        iVar16 = *piVar18;
      }
      uVar13 = **(undefined4 **)(iVar16 + 0x5c);
      if (iVar17 == 0) {
        func_0x014388e4();
      }
      iVar17 = func_0x020ea420(iVar17,uVar3,uVar13,0);
      if (iVar17 == 0) {
        return;
      }
      iVar17 = *(int *)(param_1 + 0xd4);
      uStack_60 = 0;
      if (*(int *)(**(int **)(&UNK_02c72e5c + _UNK_02c73c64) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar12 = *(undefined4 **)(&UNK_02c72e80 + _UNK_02c73c68);
      iVar16 = func_0x014e9518(*puVar12);
      uVar13 = *(undefined4 *)(param_1 + 0x78);
      uVar3 = FUN_02c6b6f0(param_1);
      if (iVar16 == 0) {
        func_0x014388e4();
      }
      if (iVar17 == 2) {
        uVar14 = FUN_02bd694c(iVar16,uVar13,&uStack_60,uVar3,0);
        puVar6 = *(undefined4 **)(&UNK_02c72eec + _UNK_02c73c70);
        if (*(int *)(**(int **)(&UNK_02c72ed8 + _UNK_02c73c6c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar17 = func_0x03b2c734(*puVar6);
        if (iVar17 == 0) {
          func_0x014388e4();
        }
        uVar3 = func_0x020ecfcc(iVar17,0);
        iVar17 = *(int *)(param_1 + 0x8c);
        if (iVar17 == 0) {
          func_0x014388e4();
        }
        iVar17 = *(int *)(iVar17 + 0x94);
        if (iVar17 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar17 + 0xc) < 2) {
          func_0x014388e8();
        }
        uVar13 = *(undefined4 *)(iVar17 + 0x14);
        iVar17 = func_0x014e9518(*puVar12);
        uVar15 = *(undefined4 *)(param_1 + 0x8c);
        if (iVar17 == 0) {
          func_0x014388e4();
        }
        uVar15 = FUN_02bd6714(iVar17,uVar15,0);
        fVar20 = (float)VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
        pcVar10 = &UNK_02c72f90 + _UNK_02c73c74;
        fVar21 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
        fVar23 = (float)VectorSignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
        if (*pcVar10 == '\0') {
          func_0x01438628(*(undefined4 *)(&UNK_02c72fb4 + _UNK_02c73c78));
          *pcVar10 = '\x01';
        }
        if (*(int *)(**(int **)(&UNK_02c72fd0 + _UNK_02c73c7c) + 0x74) == 0) {
          func_0x014387a4();
        }
        fVar20 = (float)func_0x024f04b4((fVar21 / fVar20) * fVar23);
        uVar8 = *(uint *)(iVar2 + 0x20);
        uVar9 = *(uint *)(iVar2 + 0x24);
        uVar22 = (uint)fVar20;
        if (fVar20 == _UNK_02c73234) {
          uVar22 = 0x80000000;
        }
        uVar7 = uVar14;
        if ((int)uVar22 < (int)uVar14) {
          uVar7 = uVar22;
        }
        iVar16 = uVar8 - uVar7;
        uVar1 = (int)uVar7 >> 0x1f;
        iVar17 = uVar9 - (uVar1 + (uVar7 > uVar8));
        if (uVar9 <= uVar1 && (uint)(uVar7 <= uVar8) <= uVar9 - uVar1) {
          iVar17 = 0;
          iVar16 = 0;
        }
        FUN_026f6e40(iVar2,uVar7,iVar16,iVar17,0);
        if ((int)uVar14 <= (int)uVar22) {
          if (*(int *)(**(int **)(&UNK_02c73054 + _UNK_02c73ff4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar17 = func_0x014e9518(*puVar12);
          if (iVar17 == 0) {
            func_0x014388e4();
          }
          FUN_02be240c(iVar17,iVar2,1,0);
          iVar17 = func_0x014e9518(*puVar12);
          uVar3 = FUN_02c6b82c(param_1);
          uVar13 = FUN_02c6b6f0(param_1);
          if (iVar17 == 0) {
            func_0x014388e4();
          }
          FUN_02bd98a4(iVar17,uVar3,uVar13,0);
          FUN_026f7770(iVar2,0,0);
        }
        iVar2 = **(int **)(**(int **)(&UNK_02c730f0 + _UNK_02c73ff8) + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = FUN_02c3d868(iVar2,0);
        uVar3 = *(undefined4 *)(param_1 + 0x78);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = FUN_02beba7c(iVar2,uVar3,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        piVar18 = *(int **)(&UNK_02c73150 + _UNK_02c73ffc);
        iVar16 = *(int *)(iVar2 + 0xc);
        iVar2 = *piVar18;
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x014387a4();
          iVar2 = *piVar18;
        }
        iVar5 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
        if (iVar5 == 0) {
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x014387a4();
            iVar2 = *piVar18;
          }
          uVar3 = **(undefined4 **)(iVar2 + 0x5c);
          iVar5 = func_0x014388d4(**(undefined4 **)(&UNK_02c731a0 + _UNK_02c74000));
          func_0x0152e3ec(iVar5,uVar3,**(undefined4 **)(&UNK_02c731c0 + _UNK_02c74004),0);
          piVar18 = (int *)(*(int *)(*piVar18 + 0x5c) + 4);
          *piVar18 = iVar5;
          func_0x014385cc(piVar18,iVar5);
        }
        if (iVar16 == 0) {
          func_0x014388e4();
        }
        iVar17 = 0;
        FUN_02c2865c(iVar16,1,iVar5,0);
      }
      else {
        uVar14 = FUN_02bd880c(iVar16,uVar13,&uStack_60,uVar3,0);
        puVar12 = *(undefined4 **)(&UNK_02c73cbc + _UNK_02c74800);
        if (*(int *)(**(int **)(&UNK_02c73ca8 + _UNK_02c747fc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar17 = func_0x03b2c734(*puVar12);
        if (iVar17 == 0) {
          func_0x014388e4();
        }
        uVar3 = func_0x020ecfcc(iVar17,0);
        iVar17 = func_0x014e9518(**(undefined4 **)(&UNK_02c73cf4 + _UNK_02c74804));
        uVar13 = *(undefined4 *)(param_1 + 0x8c);
        if (iVar17 == 0) {
          func_0x014388e4();
        }
        iVar17 = FUN_02bd8354(iVar17,uVar13,iVar2,0);
        if (iVar17 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar17 + 0xc) < 2) {
          func_0x014388e8();
        }
        uVar13 = *(undefined4 *)(iVar17 + 0x14);
        iVar17 = func_0x014e9518(**(undefined4 **)(&UNK_02c73d4c + _UNK_02c74808));
        uVar15 = *(undefined4 *)(param_1 + 0x8c);
        if (iVar17 == 0) {
          func_0x014388e4();
        }
        uVar15 = FUN_02bd84dc(iVar17,uVar15,iVar2,0);
        fVar20 = (float)VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
        pcVar10 = &UNK_02c73d94 + _UNK_02c7480c;
        fVar21 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
        fVar23 = (float)VectorSignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
        if (*pcVar10 == '\0') {
          func_0x01438628(*(undefined4 *)(&UNK_02c73db8 + _UNK_02c74810));
          *pcVar10 = '\x01';
        }
        if (*(int *)(**(int **)(&UNK_02c73dd8 + _UNK_02c74814) + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar24 = func_0x024f04b4((fVar21 / fVar20) * fVar23);
        uVar8 = *(uint *)(iVar2 + 0x48);
        uVar9 = *(uint *)(iVar2 + 0x4c);
        uVar22 = (uint)(float)uVar24;
        if ((float)uVar24 == _UNK_02c741f0) {
          uVar22 = 0x80000000;
        }
        uVar7 = uVar14;
        if ((int)uVar22 < (int)uVar14) {
          uVar7 = uVar22;
        }
        iVar16 = uVar8 - uVar7;
        uVar1 = (int)uVar7 >> 0x1f;
        iVar17 = uVar9 - (uVar1 + (uVar7 > uVar8));
        if (uVar9 <= uVar1 && (uint)(uVar7 <= uVar8) <= uVar9 - uVar1) {
          iVar17 = 0;
          iVar16 = 0;
        }
        FUN_026f72d8(iVar2,(int)((ulonglong)uVar24 >> 0x20),iVar16,iVar17,0);
        uVar8 = *(uint *)(iVar2 + 0x18);
        uVar9 = *(uint *)(iVar2 + 0x1c);
        iVar16 = uVar8 - uVar7;
        iVar17 = uVar9 - (uVar1 + (uVar7 > uVar8));
        if (uVar9 <= uVar1 && (uint)(uVar7 <= uVar8) <= uVar9 - uVar1) {
          iVar17 = 0;
          iVar16 = 0;
        }
        FUN_026f6d70(iVar2,uVar9,iVar16,iVar17,0);
        piVar18 = *(int **)(&UNK_02c73e80 + _UNK_02c74818);
        if ((int)uVar14 <= (int)uVar22) {
          if (*(int *)(**(int **)(&UNK_02c73e8c + _UNK_02c7481c) + 0x74) == 0) {
            func_0x014387a4();
          }
          puVar12 = *(undefined4 **)(&UNK_02c73ea8 + _UNK_02c74820);
          iVar17 = func_0x014e9518(*puVar12);
          if (iVar17 == 0) {
            func_0x014388e4();
          }
          FUN_02be21bc(iVar17,iVar2,0,0);
          iVar17 = func_0x014e9518(*puVar12);
          if (iVar17 == 0) {
            func_0x014388e4();
          }
          FUN_02bd93c8(iVar17,iVar2,0);
        }
        iVar2 = **(int **)(**(int **)(&UNK_02c73f04 + _UNK_02c74824) + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = FUN_02c3d868(iVar2,0);
        uVar3 = *(undefined4 *)(param_1 + 0x78);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = FUN_02beba7c(iVar2,uVar3,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        FUN_02c2865c(iVar2,1,0,0);
        if (*(int *)(*piVar18 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar17 = 0;
        iVar2 = func_0x0202346c(0);
        uVar3 = func_0x01524ffc(iVar4 + 8,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar2,0x2d,uVar3,0,0,0,0);
      }
    }
    break;
  case 2:
    iVar17 = *(int *)(iVar4 + 200);
    if (0 < *(int *)(iVar2 + 0x54)) {
      iVar17 = (*(int *)(iVar2 + 0x54) * iVar17) / 100;
    }
    iVar16 = **(int **)(*piVar18 + 0x5c);
    if (iVar16 == 0) {
      func_0x014388e4();
    }
    iVar16 = func_0x02b67abc(iVar16,0x67,0);
    if (iVar16 == 0) {
      iVar16 = **(int **)(*piVar18 + 0x5c);
      if (iVar16 == 0) {
        func_0x014388e4();
      }
      iVar16 = func_0x02b67abc(iVar16,0x66,0);
      if (iVar16 != 0) goto code_r0x02c732c0;
    }
    else {
code_r0x02c732c0:
      iVar16 = *(int *)(param_1 + 0x24);
      if (iVar16 == 0) {
        func_0x014388e4();
      }
      func_0x02032130(iVar16,**(undefined4 **)(&UNK_02c732e8 + _UNK_02c74200),1,0);
      *(undefined4 *)(param_1 + 0xcc) = 0;
    }
    iVar16 = **(int **)(*piVar18 + 0x5c);
    if (iVar16 == 0) {
      func_0x014388e4();
    }
    func_0x02b65c74(iVar16,0x67,0,0,0);
    iVar16 = *(int *)(iVar2 + 0x50);
    if (*(int *)(**(int **)(&UNK_02c7333c + _UNK_02c74324) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar14 = iVar16 == 1 & param_2;
    iVar16 = func_0x0202346c(0);
    if (iVar16 == 0) {
      func_0x014388e4();
    }
    uVar3 = 0x16;
    if (uVar14 != 0) {
      uVar3 = 0x17;
    }
    func_0x020257a4(iVar16,uVar3,0,0,0,0,0);
    puVar12 = *(undefined4 **)(&UNK_02c733dc + _UNK_02c74330);
    if (uVar14 != 0) {
      puVar12 = *(undefined4 **)(&UNK_02c733d4 + _UNK_02c7432c);
    }
    uVar3 = *puVar12;
    iVar16 = **(int **)(**(int **)(&UNK_02c733c8 + _UNK_02c74328) + 0x5c);
    if (iVar16 == 0) {
      func_0x014388e4();
    }
    iVar16 = func_0x02e61e0c(iVar16,0x65,iVar17,0);
    if (iVar16 != 0 || param_2 != 0) {
      if (*(int *)(**(int **)(&UNK_02c73428 + _UNK_02c74334) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar12 = *(undefined4 **)(&UNK_02c73448 + _UNK_02c74338);
      iVar16 = func_0x014e9518(*puVar12);
      uVar13 = FUN_02c6b6f0(param_1);
      if (iVar16 == 0) {
        func_0x014388e4();
      }
      FUN_02be316c(iVar16,uVar13,0);
      iVar16 = func_0x014e9518(*puVar12);
      uVar15 = *(undefined4 *)(param_1 + 0x78);
      uVar19 = *(undefined4 *)(iVar2 + 8);
      uVar13 = FUN_02c6b6f0(param_1);
      if (iVar16 == 0) {
        func_0x014388e4();
      }
      FUN_02bd3648(iVar16,uVar15,uVar19,1,0xf,uVar13,0);
      if (0 < *(int *)(iVar4 + 0x50)) {
        iVar16 = *(int *)(param_1 + 0x20);
        if (iVar16 == 0) {
          func_0x014388e4();
        }
        iVar16 = func_0x024eecb8(iVar16,0);
        if (iVar16 == 0) {
          func_0x014388e4();
        }
        iVar16 = func_0x024eff78(iVar16,0);
        if (iVar16 == 0) {
          func_0x014388e4();
        }
        iVar16 = func_0x014e94d8(iVar16,0);
        if (iVar16 == 0) {
          func_0x014388e4();
        }
        func_0x014e94e8(iVar16,1,0);
      }
      func_0x024f1038(param_1,**(undefined4 **)(&UNK_02c73560 + _UNK_02c7433c),0);
      func_0x02c74ba0(param_1);
      iVar16 = **(int **)(**(int **)(&UNK_02c7357c + _UNK_02c74340) + 0x5c);
      if (iVar16 == 0) {
        func_0x014388e4();
      }
      iVar16 = FUN_02c3d868(iVar16,0);
      uVar13 = *(undefined4 *)(param_1 + 0x78);
      if (iVar16 == 0) {
        func_0x014388e4();
      }
      iVar16 = FUN_02beba7c(iVar16,uVar13,0);
      if (iVar16 == 0) {
        func_0x014388e4();
      }
      iVar16 = *(int *)(iVar16 + 0xc);
      if (iVar16 == 0) {
        func_0x014388e4();
      }
      FUN_02c31e3c(iVar16,**(undefined4 **)(&UNK_02c735f0 + _UNK_02c74344),0);
      func_0x02c74c80(param_1,*(undefined4 *)(param_1 + 0x7c),uVar3);
      if (*(int *)(**(int **)(&UNK_02c73614 + _UNK_02c74348) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar16 = func_0x014e9518(**(undefined4 **)(&UNK_02c73630 + _UNK_02c7434c));
      iVar11 = **(int **)(&UNK_02c73644 + _UNK_02c74350);
      iVar5 = *(int *)(iVar11 + 0x1c);
      if (iVar5 == 0) {
        func_0x014909d8(iVar11);
        iVar5 = *(int *)(iVar11 + 0x1c);
      }
      iVar5 = *(int *)(iVar5 + 8);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = func_0x0149097c();
      }
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = *(int *)(*(int *)(iVar11 + 0x1c) + 8);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = func_0x0149097c();
      }
      uVar3 = **(undefined4 **)(iVar5 + 0x5c);
      if (iVar16 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar16,**(undefined4 **)(&UNK_02c736c0 + _UNK_02c7467c),uVar3,0);
    }
    aiStack_5c[1] = 0xf;
    aiStack_5c[2] = func_0x01524ffc(iVar4 + 8,0);
    func_0x014385cc((uint)(aiStack_5c + 1) | 4,aiStack_5c[2]);
    if (*(int *)(iVar2 + 0x54) < 1) {
      uVar3 = **(undefined4 **)(&UNK_02c73a7c + _UNK_02c74878);
      uStack_50 = uVar3;
    }
    else {
      uStack_50 = **(undefined4 **)(&UNK_02c7370c + _UNK_02c74680);
      func_0x014385cc(puVar6);
      aiStack_5c[0] = *(int *)(iVar2 + 0x54);
      uVar3 = func_0x01524ffc(aiStack_5c,0);
      puVar6 = &uStack_4c;
      uStack_4c = uVar3;
    }
    goto code_r0x02c7459c;
  case 3:
    if (*(int *)(**(int **)(&UNK_02c737e0 + _UNK_02c74770) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar17 = func_0x014e9518(**(undefined4 **)(&UNK_02c737fc + _UNK_02c747ec));
    uVar3 = *(undefined4 *)(iVar2 + 8);
    if (iVar17 == 0) {
      func_0x014388e4();
    }
    iVar16 = 0;
    iVar2 = FUN_02c4b828(iVar17,uVar3,0);
    if (iVar2 == 2) {
      iVar17 = *(int *)(iVar4 + 0x70);
      iVar2 = **(int **)(**(int **)(&UNK_02c73aa0 + _UNK_02c74880) + 0x5c);
      if (iVar17 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar17 + 0xc) < 2) {
        func_0x014388e8();
      }
      uVar3 = *(undefined4 *)(iVar17 + 0x14);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar17 = 0;
      iVar16 = func_0x02e61e0c(iVar2,0x66,uVar3,0);
code_r0x02c73af8:
      if ((iVar16 == 0) && (param_2 == 0)) break;
    }
    else {
      iVar17 = 0;
      if (iVar2 != 1) goto code_r0x02c73af8;
      iVar17 = *(int *)(param_1 + 0xcc);
      iVar2 = **(int **)(*piVar18 + 0x5c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar16 = 0;
      iVar2 = func_0x02b67abc(iVar2,0x47,0);
      if (iVar2 != 0) {
        iVar17 = 0;
      }
      iVar2 = **(int **)(**(int **)(&UNK_02c73888 + _UNK_02c747f0) + 0x5c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x02e61e0c(iVar2,0x65,iVar17,0);
      if (iVar2 == 0) goto code_r0x02c73af8;
      iVar2 = **(int **)(**(int **)(&UNK_02c738c4 + _UNK_02c7487c) + 0x5c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_02c3d868(iVar2,0);
      uVar3 = *(undefined4 *)(param_1 + 0x78);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_02beba7c(iVar2,uVar3,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      FUN_02c2865c(iVar2,param_2,0,0);
    }
    func_0x02c74ba0(param_1);
    break;
  default:
    iVar17 = 0;
    goto LAB_02c745a0;
  }
  aiStack_5c[1] = 0x12;
  uVar3 = func_0x01524ffc(iVar4 + 8,0);
  puVar6 = (undefined4 *)((uint)(aiStack_5c + 1) | 4);
  aiStack_5c[2] = uVar3;
code_r0x02c7459c:
  func_0x014385cc(puVar6,uVar3);
LAB_02c745a0:
  FUN_02c725e4(param_1);
  if (param_2 != 0) {
    iVar17 = 0;
  }
  if (0 < iVar17) {
    piVar18 = *(int **)(_UNK_02c74884 + 0x2c745c4);
    iVar2 = **(int **)(*piVar18 + 0x5c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02e61e0c(iVar2,0x65,iVar17,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_02c74888 + 0x2c74690) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x03b2c734(**(undefined4 **)(_UNK_02c7488c + 0x2c746ac));
      iVar4 = *(int *)(param_1 + 0x8c);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x01524ffc(iVar4 + 8,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x029bca2c(iVar2,0x65,**(undefined4 **)(_UNK_02c74890 + 0x2c746f4),uVar3,uStack_68,1,0);
    }
    else {
      iVar2 = **(int **)(*piVar18 + 0x5c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02e62afc(iVar2,0x65,iVar17);
    }
    if (*(int *)(**(int **)(_UNK_02c74894 + 0x2c7471c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c74898 + 0x2c74738));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x0202998c(iVar2,0x20,0,0);
  }
  return;
}

