# General Physics II

<!-- @import "[TOC]" {cmd="toc" depthFrom=1 depthTo=6 orderedList=false} -->

<!-- code_chunk_output -->

- [General Physics II](#general-physics-ii)
  - [课程内容](#课程内容)
  - [成绩构成](#成绩构成)
  - [Electric Charge](#electric-chargelecture01pdf)
    - [Electric Charge](#electric-charge)
      - [Insulators and Conductors](#insulators-and-conductors)
      - [Why Conductors conduct](#why-conductors-conduct)
      - [Properties of Electric Charge](#properties-of-electric-charge)
      - [Quantizeed and Conserved Electric Charge](#quantizeed-and-conserved-electric-charge)
    - [Coulomb's Law](#coulombs-law)
      - [The Electric Field](#the-electric-field)
      - [Electric dipole](#electric-dipole)
      - [Motion of Charged Particles in an Electric Field](#motion-of-charged-particles-in-an-electric-field)
  - [Continuous Charge and Gauess's Law](#continuous-charge-and-gauesss-lawlecture02pdf)
    - [Electric Filed due to a Continuous Charge Distribution](#electric-filed-due-to-a-continuous-charge-distribution)
    - [Electric Flux and Gauss's Law](#electric-flux-and-gausss-law)
    - [Application of Gauss's law to Charged Insulators](#application-of-gausss-law-to-charged-insulators)
      - [Spherical Symmetry](#spherical-symmetry)
      - [Planar Symmetry](#planar-symmetry)
      - [Cylindrical Symmetry](#cylindrical-symmetry)

<!-- /code_chunk_output -->
## 课程内容

普物 Ⅱ 讲解电磁学、光学和量子力学，考试重点考察大学新学习的内容，具体而言，电磁学都是以麦克斯韦方程组为基础，只是讲解顺序不同，光学讲解几何光学（反射折射以及透镜等）、波动光学（干涉衍射偏振等）以及基本的光的量子性，万歆（路欣）班对量子物理的要求较高

## 成绩构成

- 作业30%
8次作业，周三发布，通常两周后提交

- 小测+期中30%

小测课中进行
期中考试11.15

- 期末40%

## [Electric Charge](lecture01.pdf)

### Electric Charge

#### Insulators and Conductors

- Insulators

- Conductors

- Semiconductos

- Superconductors

#### Why Conductors conduct

- Conductors are made up of atoms

- their electrons become free to wander about the solid

#### Properties of Electric Charge

- There are two types of electric charge,named as positive charge and negative charge
- When the net charge of an object is zero,its said to be neutral
- Particles with the same sign of electrical charge repel each other,and particles with opposite signs sttract each other

#### Quantizeed and Conserved Electric Charge

- conservation of charge:e
- charge is Lorentz invariant
 $q=ne$
 $e=1.602*10^{-19} C$

### Coulomb's Law

- if two charged particles are brought near each other, they each exert an (attractive or repulsive) electrostatic force onthe other
 $ \vec{F} = k \frac{q_1 q_2}{r^2} \hat r$

- The electrostatic constant k has a value $ k =8.999* 10^9 N·m^2 / C^2$
- For simplicity and historical reasons,we often we write
 $ k=\frac{1}{4 \pi \epsilon _0}$
 where $ \epsilon_0 =8.85*10^{-12} C^2 / N·m^2$ is known as the permittivity constant

<!-- 
### Action at a Distance

- Field is a map, or a funstion,that represents the distribution of a quantity
- Scalar fields
  - Temperature field $ T(x,y,z)$ — e.g. in heat conduction
  - Pressure field $ P(x,y,z)$ — e.g. in Pascal's principle
- Vector fields
  - Velocity field $ vec{v}(x,y,x)$ e.g. in fluid dynamics
  - Force filed $ vec{F}(x,y,z)$
- There can also be time-varying fields e.g. $ T(x,y,z,t)$ -->

#### The Electric Field

- Electric Field
 $\vec{E}=\vec{F}/q_0$

- From Coulomb's law,the forceon the test charge due to a charged particle with charge q at distance r is
 $\vec{F}=\frac{1}{4 \pi \epsilon _0} \frac{q q_0}{r^2} \hat r$
- Rewrite the electric field as
 $\vec{E}=\frac{\vec{F}}{q_0}=\frac{1}{4 \pi \epsilon _0} \frac{q}{r^2} \hat r$

#### Electric dipole

- An electric dipole is a apir of two particals that have the same charge magnitude q but opposite signs.The particals are separated by distance d and lie along the dipole axis, an axis of ratation symmetry

- At an arbitrary point P along the dipole axis,at a distance z form the dipole's center
 $ E=\frac{q}{4 \pi \epsilon _0 (z-\frac{1}{2}d)^2}-\frac{q}{4 \pi \epsilon_0 (z+\frac{1}{2}d)^2}$

- For $z\gg d$,we obtain
 $E=\frac{1}{2 \pi \epsilon _0} \frac{p}{z^3} $
- The product $\vec{q}d$ is known as the electric dipole moment $ \vec{p}$ of the dipole

- Rewrite the electric field as
 $\vec{E}=\frac{\vec{F}}{q_0}=\frac{1}{4 \pi \epsilon _0} \frac{q}{r^2} \hat r$

#### Motion of Charged Particles in an Electric Field

- In terms of the magitudes of the electric field E and the dipole moment $p=qd$,we find
 $\tau = -Fd \sin \theta = -pE \ sin \theta$
- In vector form
 $ \vec{\tau} = \vec{p} × \vec{E}$

## [Continuous Charge and Gauess's Law](lecture02.pdf)

### Electric Filed due to a Continuous Charge Distribution

- The Electric Field Due to a Ring of Charge
Consider a thin ring of radius R with a uniform,fixed distribution of positive charge along its circumference.
 $ dE_z=\frac{1}{4 \pi \epsilon _0} \frac{\lambda ds}{z^2 + R^2} \frac{z}{(z^2 + R^2)^{\frac{1}{2}}} $
 We integrate along the ring , from element to element
 $ E_z = \int {\rm d}E_z = \frac{qz}{4 \pi \epsilon (z^2 + R^2)^{\frac{3}{2}}}$

- The Electric Field Due to a Charged Disk
Consider the electric field of a disk of radius R with a uniform, fixed distribution of positive charge on its top surface.The surface density is $\sigma$
 $ dE_z=\frac{\sigma (2\pi rdr)z}{4 \pi \epsilon _0 (z^2 + r^2)^{\frac{3}{2}}} $
 We integrate along the ring , from element to element
$ E_z = \int {\rm d}E_z = \frac{\sigma}{2\epsilon_0} [1-\frac{z}{ (z^2 + R^2)^{\frac{1}{2}}}]$

### Electric Flux and Gauss's Law

- Electric flux to determine how much electric field pierces a surface
The amount of electric field piercing the patch is defined to be ther electric flux $\Delta \phi$ thought it
 $\Delta \phi = (E\cos \theta)\Delta A$

- Alternatively, we define an area vector $ \vec{E}·\vec{\Delta A}$,which is perpendicular to the patch andwhich has a magnitude equal to the area $ \Delta A$ of the patch. Thus
 $ \Delta \phi = \vec{E}·\vec{\Delta A}$
 $ \phi = \int \vec{E}·\vec{d A}$

- Gauss’ law relates the net flux $ \phi$ of an electric field through a closed surface (a Gaussian surface) to the net charge $q_enc$ that is enclosed by that surface. It tells us that,in a vacuum or (what is the same for most practicalpurposes) in air $\epsilon _0 \phi = q_{enc}$ For Gaussian surface
 $\epsilon _0 \oint \vec{E}·\vec{d}A = q_{enc}$

### Application of Gauss's law to Charged Insulators

#### Spherical Symmetry
<!-- 对称球 -->
- If the full charge q enclosed within radius R is uniform, the enclosed charge is $ q'=q(r/R)^3$ ,and Guass's Law reads
 $ (4 \pi r^2)E = \frac{q'}{\epsilon_0}$
- Therefore,we have,for $ r \leq R$
 $ \vec{E} = (\frac{q}{4\pi \epsilon R^3})\vec{r} $

#### Planar Symmetry

- $ E = \frac{\sigma}{2 \epsilon} $

#### Cylindrical Symmetry

- $ E = \frac{\lambda}{2 \pi \epsilon _0 r} $

[homework1](homework01.pdf)
